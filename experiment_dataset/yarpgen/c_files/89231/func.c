/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89231
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89231 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89231
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65118))) : (max((1031827813036299417ULL), ((~(18446744073709551602ULL)))))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 1; i_0 < 24; i_0 += 2) /* same iter space */
    {
        arr_2 [i_0 + 1] = ((/* implicit */unsigned short) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((((/* implicit */_Bool) var_5)) ? (4156578368082305111ULL) : (var_8))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_9))))))));
    }
    for (unsigned int i_1 = 1; i_1 < 24; i_1 += 2) /* same iter space */
    {
        arr_7 [16] = ((/* implicit */unsigned char) min((0U), (((/* implicit */unsigned int) (signed char)0))));
        /* LoopNest 3 */
        for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
        {
            for (long long int i_3 = 1; i_3 < 22; i_3 += 3) 
            {
                for (unsigned char i_4 = 0; i_4 < 25; i_4 += 3) 
                {
                    {
                        var_15 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_10 [i_1] [i_1] [i_3] [i_3 - 1])) ? (((((/* implicit */_Bool) ((unsigned char) var_6))) ? (min((((/* implicit */unsigned long long int) arr_8 [i_2] [i_4] [i_4])), (18446744073709551602ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_3 - 1])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)29227))))), (18446744073709551615ULL)))));
                        /* LoopSeq 2 */
                        for (signed char i_5 = 2; i_5 < 23; i_5 += 3) /* same iter space */
                        {
                            arr_16 [i_1] = ((((/* implicit */_Bool) var_0)) ? (min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_9)), (var_2)))), ((+(var_11))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)57074))));
                            var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) arr_11 [i_1] [i_2] [i_2]))));
                            var_17 = ((/* implicit */unsigned long long int) ((_Bool) (unsigned short)6755));
                            var_18 = ((/* implicit */short) ((arr_9 [3LL] [i_3] [i_5]) || (((/* implicit */_Bool) ((((/* implicit */_Bool) max(((short)2137), (((/* implicit */short) var_1))))) ? (((/* implicit */int) (short)-18281)) : (((/* implicit */int) ((unsigned char) (unsigned char)0))))))));
                        }
                        /* vectorizable */
                        for (signed char i_6 = 2; i_6 < 23; i_6 += 3) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) 18446744073709551611ULL);
                            var_20 = ((/* implicit */unsigned short) arr_0 [i_3] [i_4]);
                        }
                        arr_20 [i_1 - 1] [(signed char)2] [i_1 - 1] = ((/* implicit */long long int) (signed char)-12);
                    }
                } 
            } 
        } 
        arr_21 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((3732601147031384903LL), (((/* implicit */long long int) arr_0 [i_1 + 1] [i_1 + 1])))))))) : (((/* implicit */int) min((((/* implicit */unsigned char) var_5)), ((unsigned char)113))))));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) arr_18 [i_7] [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_7] [i_7])) ? (((/* implicit */long long int) ((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_7] [i_7] [i_7 - 1])), (arr_1 [i_7]))))) : (((long long int) 9223372036854775807LL)))), (arr_4 [i_7]))))));
        arr_24 [i_7] [i_7] = ((/* implicit */unsigned int) (unsigned char)13);
        var_22 *= ((/* implicit */_Bool) arr_15 [i_7 - 1] [i_7] [i_7] [i_7] [i_7] [i_7 - 1]);
    }
    var_23 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) > (max((((/* implicit */unsigned long long int) (unsigned char)99)), ((~(var_8)))))));
    var_24 = ((/* implicit */short) ((unsigned long long int) var_1));
}
