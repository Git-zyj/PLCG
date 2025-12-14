/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71565
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71565 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71565
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_20 = ((/* implicit */unsigned char) var_8);
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 10; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 9; i_2 += 4) 
                {
                    for (short i_3 = 2; i_3 < 10; i_3 += 3) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((((/* implicit */int) (unsigned short)46730)), (((((/* implicit */_Bool) (unsigned char)12)) ? (((/* implicit */int) (short)2241)) : (((/* implicit */int) (short)-32767))))))) ? ((+(((/* implicit */int) (unsigned char)234)))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)127)) ? (((/* implicit */int) (unsigned char)211)) : (((/* implicit */int) (unsigned char)74))))))))));
                                var_22 *= ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned char)26)) : (((/* implicit */int) (unsigned short)2744))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (short)-8028)), ((unsigned short)62893)))) : (((/* implicit */int) max(((short)31), ((short)32760)))))) % (((((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)255)), ((short)31)))) ? ((+(((/* implicit */int) (signed char)-9)))) : (((/* implicit */int) (short)20076))))));
                                arr_17 [6U] [i_0] [(short)6] [6U] [i_3] [i_4] [i_4] = min(((((!(((/* implicit */_Bool) (short)-31)))) ? (((long long int) (signed char)-80)) : (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)27581)) ? (((/* implicit */int) (unsigned short)62795)) : (((/* implicit */int) (unsigned short)46615))))))), (((/* implicit */long long int) ((unsigned char) ((((/* implicit */_Bool) (signed char)15)) ? (((/* implicit */int) (unsigned char)234)) : (((/* implicit */int) (short)-32767)))))));
                                var_23 &= ((/* implicit */signed char) (unsigned char)13);
                                arr_18 [i_0] [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */int) (short)-32767)) - (((/* implicit */int) (unsigned char)28))))));
                            }
                        } 
                    } 
                } 
                arr_19 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((short) (short)(-32767 - 1)))) ? ((~(3189320496U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (short)-23763)) : (((/* implicit */int) (unsigned short)2744)))))));
                arr_20 [i_0] [i_1 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max(((short)-32762), ((short)1)))) ? (((((/* implicit */_Bool) (unsigned short)2203)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (signed char)-1)))) : ((-(((/* implicit */int) (short)-32757))))));
            }
        } 
    } 
    var_24 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_16))));
}
