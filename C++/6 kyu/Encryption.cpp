// Implement a pseudo-encryption algorithm which given a string S and an integer N concatenates all the odd-indexed characters of S with all the even-indexed characters of S, this process should be repeated N times.

std::string encrypt(std::string text, int n)
{
  std::string tmp1, tmp2;
  if (text == "" || n <= 0)
    return text;
  while (n--)
  {
    tmp1 = "";
    tmp2 = "";
    for (int iter = 0; iter != int(text.length()); iter++)
    {
      if (iter % 2 == 1)
        tmp1 += text[iter];
      else
        tmp2 += text[iter];
    }
    text = tmp1 + tmp2;
  }
    return text;
}

std::string decrypt(std::string encryptedText, int n)
{
  if (n < 1 || encryptedText == "")
    return encryptedText;
  std::string tmp;
  int mid = encryptedText.size() / 2;
  int size = encryptedText.size();
  std:: cerr << mid << std::endl;
  while (n--)
  {
    tmp = encryptedText;
    encryptedText = "";
    for (int i = 0; i < mid; i++) {
      encryptedText += std::string(1, tmp[i+mid]) + std::string(1, tmp[i]);
    }
    if (mid * 2 != size) 
     encryptedText += std::string(1, tmp[mid+mid]);
  }
  return encryptedText;
}