/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 96519
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=96519 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/96519
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
    var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((var_14) ? (var_18) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0)))))))) / (var_8)));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) < (2380409430U))) || (((((/* implicit */int) (signed char)86)) >= (((/* implicit */int) (unsigned short)46854))))));
        var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) 15957574470537097366ULL))));
        var_23 = ((/* implicit */unsigned short) max((((((/* implicit */int) arr_2 [i_0])) & (((/* implicit */int) arr_2 [i_0])))), (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_2 [i_0])))))));
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)0))) % (1914557870U)));
        var_25 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)65535), (((/* implicit */unsigned short) (signed char)90))))) ? (((/* implicit */int) (unsigned char)215)) : (((((/* implicit */_Bool) (unsigned short)65525)) ? (((/* implicit */int) (unsigned char)47)) : (((/* implicit */int) arr_3 [i_0] [i_0]))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (short)6639))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2380409409U)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))) : (var_1)))), (5130977956030464443ULL)))));
    }
    for (unsigned short i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1016)) ? (2522984480U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)63336)))))) ? (((/* implicit */int) ((unsigned short) var_5))) : (((/* implicit */int) ((((/* implicit */_Bool) (short)22037)) || (((/* implicit */_Bool) arr_5 [i_1]))))))))))));
        var_27 = ((/* implicit */unsigned short) ((_Bool) (unsigned short)16383));
        var_28 = ((/* implicit */unsigned int) (short)22039);
    }
    for (unsigned int i_2 = 0; i_2 < 19; i_2 += 2) 
    {
        /* LoopNest 3 */
        for (short i_3 = 3; i_3 < 17; i_3 += 4) 
        {
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 3) 
            {
                for (short i_5 = 0; i_5 < 19; i_5 += 4) 
                {
                    {
                        var_29 = ((/* implicit */unsigned long long int) arr_2 [i_5]);
                        var_30 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_2])) || (((/* implicit */_Bool) ((short) (short)-20680)))));
                    }
                } 
            } 
        } 
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) max((((((arr_14 [i_2] [i_2] [i_2]) ? (((/* implicit */long long int) ((/* implicit */int) (short)20680))) : (arr_4 [i_2]))) / (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))))))), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_2)) ? (17174103784126976030ULL) : (((/* implicit */unsigned long long int) arr_9 [i_2])))) >= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)197)))))))))));
        var_32 = ((/* implicit */unsigned int) min((var_32), (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_7 [i_2] [i_2])) ? ((((((-(((/* implicit */int) arr_7 [i_2] [i_2])))) + (2147483647))) << (((((/* implicit */int) arr_1 [i_2] [i_2])) - (9))))) : (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (arr_13 [i_2] [i_2])))))))));
        var_33 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_16 [(signed char)13] [(signed char)13] [(signed char)13] [i_2] [(signed char)13]))) ^ (4194303LL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned short)24548), (((/* implicit */unsigned short) (short)-756)))))) | (max((var_3), (((/* implicit */unsigned int) arr_15 [i_2] [i_2]))))))) : (((((/* implicit */_Bool) 18446744073709551610ULL)) ? (15091045232595343420ULL) : (((/* implicit */unsigned long long int) -2012810806423427399LL))))));
    }
}
