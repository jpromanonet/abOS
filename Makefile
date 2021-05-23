GPPPARAMS = -m32

%.o: %.cpp
		g++(GPPPARAMS) -o $@ -c $<

