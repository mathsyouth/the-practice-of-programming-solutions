if (c != 'y' && c != 'Y')
    return;

if (length > BUFSIZE)
    length = BUFSIZE;

flag = !flag;

isquote = (*line == '"') ? 1 : 0;

bit = val & 1;
