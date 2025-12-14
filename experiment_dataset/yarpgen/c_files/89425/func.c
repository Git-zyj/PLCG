/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89425
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89425 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89425
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
    var_12 = ((/* implicit */long long int) var_11);
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_13 = ((/* implicit */unsigned short) (-(min((((/* implicit */int) arr_1 [i_0] [i_0])), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0]))))))));
        var_14 |= ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4171386135U)) ? (min((var_2), (((/* implicit */unsigned int) arr_0 [i_0] [i_0])))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0])))))) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((var_0) >> (((((/* implicit */int) arr_1 [i_0] [i_0])) - (12845))))) : (((/* implicit */int) arr_1 [i_0] [i_0])))) : ((-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_6))))))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) arr_0 [i_0] [i_0]);
        var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0] [i_0]))) <= (var_7))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65530))) : (var_4)));
    }
    for (int i_1 = 0; i_1 < 11; i_1 += 4) 
    {
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) (unsigned short)22027)) : (1983079068)));
        var_17 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)8191))))) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_1] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_6 [i_1] [i_1])))) : (((arr_6 [(signed char)0] [i_1]) >> (((max((7LL), (((/* implicit */long long int) (unsigned short)8179)))) - (8170LL)))))));
        /* LoopNest 2 */
        for (long long int i_2 = 2; i_2 < 10; i_2 += 4) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    var_18 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned char) arr_0 [i_1] [i_2])), (arr_9 [i_1] [i_2])))) ? (((long long int) arr_1 [11LL] [11LL])) : ((~(-3477427534026724202LL)))))) ? (min(((+(var_2))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)43527))) % (var_4))))) : (((((/* implicit */unsigned int) min((arr_7 [i_1] [i_2] [5]), (1465040434)))) * (max((((/* implicit */unsigned int) var_8)), (var_4)))))));
                    arr_13 [i_3] = ((/* implicit */short) (+(((int) arr_1 [i_2 + 1] [i_2 + 1]))));
                    /* LoopNest 2 */
                    for (long long int i_4 = 0; i_4 < 11; i_4 += 4) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 11; i_5 += 1) 
                        {
                            {
                                arr_21 [2LL] [i_2] [i_3] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_5)) ? (((arr_16 [i_1] [i_1] [i_1] [i_1] [i_1] [i_3]) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_11))))) : (((/* implicit */long long int) min((var_9), (((/* implicit */int) arr_1 [i_1] [i_1]))))))) & (min((var_7), (((/* implicit */long long int) var_10))))));
                                var_19 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_3] [i_3]))));
                            }
                        } 
                    } 
                    arr_22 [i_1] [i_3] [i_3] = max((((((/* implicit */_Bool) ((((/* implicit */int) arr_3 [i_1])) >> (((4223228053U) - (4223228031U)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_10))) | (arr_15 [8ULL] [i_3] [i_3] [i_3]))) : (var_4))), (((/* implicit */unsigned int) 1465040433)));
                    var_20 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) 1171587673))));
                }
            } 
        } 
    }
    var_21 = min((((/* implicit */long long int) var_6)), ((+(var_7))));
}
