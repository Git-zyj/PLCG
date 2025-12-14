/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 8956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=8956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/8956
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
    var_20 = ((/* implicit */int) ((((((((/* implicit */_Bool) -5956713147266864863LL)) && (((/* implicit */_Bool) var_4)))) || (((/* implicit */_Bool) 92547382631808014ULL)))) && (((/* implicit */_Bool) ((unsigned short) max((2113929216U), (((/* implicit */unsigned int) -1520551971))))))));
    var_21 &= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (unsigned short)40601)), (((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)198))) / (((18354196691077743608ULL) * (((/* implicit */unsigned long long int) var_11))))))));
    /* LoopSeq 1 */
    for (unsigned char i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) min((((unsigned short) 590934225U)), (((/* implicit */unsigned short) (_Bool)0)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            for (long long int i_2 = 2; i_2 < 17; i_2 += 1) 
            {
                {
                    arr_10 [i_2 + 2] &= ((/* implicit */unsigned short) ((((unsigned long long int) arr_8 [i_0 + 1] [i_0 + 1] [i_2])) != (((arr_8 [i_0] [i_0 - 1] [i_2]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : (18354196691077743602ULL)))));
                    var_23 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((signed char) (_Bool)1)))));
                }
            } 
        } 
        var_24 *= ((/* implicit */_Bool) ((((-1526175935) + (2147483647))) >> (((/* implicit */int) (_Bool)0))));
        var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) ((((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned short)6752)), (var_9)))) != (((((/* implicit */_Bool) arr_9 [i_0])) ? (92547382631808014ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))))))) ? (18354196691077743602ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0 - 1]))))))));
        /* LoopSeq 4 */
        for (unsigned short i_3 = 3; i_3 < 18; i_3 += 1) /* same iter space */
        {
            var_26 = ((/* implicit */long long int) (_Bool)1);
            arr_13 [i_0 - 2] [i_3 + 2] [i_3 + 2] = ((/* implicit */signed char) (_Bool)1);
            arr_14 [i_0] [i_3 - 3] [i_3 - 1] = ((/* implicit */_Bool) 18354196691077743602ULL);
            /* LoopNest 2 */
            for (_Bool i_4 = 0; i_4 < 0; i_4 += 1) 
            {
                for (unsigned short i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    {
                        var_27 = ((/* implicit */unsigned char) var_5);
                        arr_20 [i_0] [i_3] [i_4] [i_5] = ((/* implicit */long long int) ((unsigned char) ((((/* implicit */int) var_19)) * (((/* implicit */int) ((unsigned short) arr_8 [i_0 - 3] [i_3] [i_5]))))));
                        var_28 ^= ((/* implicit */unsigned short) (~(((/* implicit */int) (short)-31718))));
                        var_29 = ((/* implicit */unsigned char) var_5);
                        var_30 = ((/* implicit */int) min((var_30), (((((/* implicit */int) arr_15 [i_0] [6ULL] [i_5])) & (((/* implicit */int) ((((/* implicit */int) (unsigned char)144)) >= ((-(((/* implicit */int) (unsigned short)65534)))))))))));
                    }
                } 
            } 
            var_31 *= ((/* implicit */unsigned short) ((unsigned char) var_8));
        }
        /* vectorizable */
        for (unsigned short i_6 = 3; i_6 < 18; i_6 += 1) /* same iter space */
        {
            arr_24 [i_0] [i_0] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)151)) ? (var_12) : (((/* implicit */int) (unsigned char)10))))) ? ((-(((/* implicit */int) var_19)))) : ((-(((/* implicit */int) arr_12 [i_0] [i_6]))))));
            arr_25 [i_0] = ((/* implicit */unsigned short) var_13);
            var_32 *= ((_Bool) arr_0 [i_6 + 1]);
        }
        for (signed char i_7 = 0; i_7 < 21; i_7 += 3) 
        {
            arr_28 [(_Bool)1] = ((/* implicit */unsigned long long int) min((((((/* implicit */int) arr_15 [i_0 - 3] [i_0 + 1] [i_7])) / ((-(((/* implicit */int) (_Bool)1)))))), (((arr_26 [i_0 - 4] [i_0 - 4] [i_0 - 4]) % (arr_26 [i_0 - 4] [i_0 - 2] [i_0 - 3])))));
            var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) (+(((/* implicit */int) ((((/* implicit */int) arr_11 [i_0] [i_7])) <= (((((/* implicit */int) arr_21 [i_7])) >> (((8731712628874665333ULL) - (8731712628874665307ULL)))))))))))));
            var_34 = ((/* implicit */unsigned long long int) max((var_34), (((/* implicit */unsigned long long int) ((((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)1)), (arr_21 [i_0 - 3])))) - (((((/* implicit */int) var_19)) & (((/* implicit */int) arr_21 [i_7])))))))));
        }
        for (unsigned char i_8 = 0; i_8 < 21; i_8 += 1) 
        {
            arr_33 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) <= (92547382631808007ULL))))))) || (((/* implicit */_Bool) ((-594401341) / (arr_18 [i_0 - 1] [i_0 - 1] [i_8] [i_0 - 1] [i_8] [i_8]))))));
            var_35 = ((/* implicit */unsigned short) max((var_35), (((/* implicit */unsigned short) (signed char)44))));
        }
    }
    var_36 = max(((-(var_12))), ((-(((/* implicit */int) ((((/* implicit */_Bool) 18354196691077743603ULL)) || (((/* implicit */_Bool) (unsigned short)65527))))))));
    var_37 |= ((/* implicit */int) ((((((/* implicit */_Bool) (-(1668743126U)))) ? (max((((/* implicit */int) var_13)), (var_8))) : ((+(((/* implicit */int) var_10)))))) <= (((/* implicit */int) var_17))));
}
