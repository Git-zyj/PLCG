/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79277
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79277 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79277
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
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)2))))))))));
            var_11 = ((/* implicit */short) ((int) (signed char)-2));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            arr_7 [(unsigned char)4] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)3584)) << (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)61942)) >> (31ULL)))))))));
            arr_8 [i_0] = ((/* implicit */unsigned int) max((max((((/* implicit */int) ((_Bool) var_3))), ((-(arr_2 [i_2] [i_0] [i_0]))))), ((~(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_0] [16U]))) == (-5305451920079792294LL))))))));
        }
        arr_9 [i_0] = ((/* implicit */unsigned int) (~(var_6)));
        var_12 += ((/* implicit */unsigned long long int) min((((/* implicit */long long int) max((((((/* implicit */_Bool) (short)24178)) ? (1287215587U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))))), (max((510471742U), (((/* implicit */unsigned int) arr_2 [(signed char)5] [i_0] [(unsigned char)2]))))))), ((+(var_6)))));
        var_13 *= ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (long long int i_3 = 0; i_3 < 18; i_3 += 1) 
    {
        var_14 |= ((/* implicit */signed char) arr_6 [i_3] [3LL]);
        var_15 = ((/* implicit */long long int) (+(((/* implicit */int) var_4))));
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 20; i_4 += 1) 
    {
        arr_15 [i_4] = ((/* implicit */_Bool) (+(((/* implicit */int) var_2))));
        /* LoopNest 2 */
        for (unsigned char i_5 = 0; i_5 < 20; i_5 += 2) 
        {
            for (int i_6 = 1; i_6 < 19; i_6 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_7 = 1; i_7 < 17; i_7 += 1) 
                    {
                        for (unsigned int i_8 = 1; i_8 < 19; i_8 += 2) 
                        {
                            {
                                var_16 = (-((+(-152693702))));
                                var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (-(arr_26 [i_7] [i_5] [i_6 + 1] [i_7] [i_8] [i_7 - 1])))) ? (((((/* implicit */int) (signed char)24)) % (((/* implicit */int) (unsigned short)61925)))) : (((((/* implicit */int) (_Bool)1)) << (((((/* implicit */int) var_0)) + (7131)))))));
                                arr_28 [i_4] [i_4] [i_4] [i_4] = (((_Bool)0) ? ((-(arr_21 [i_4] [(unsigned short)15] [(unsigned char)5] [(signed char)18]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)7))))));
                            }
                        } 
                    } 
                    var_18 = ((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) > ((-(((/* implicit */int) (_Bool)1))))));
                }
            } 
        } 
    }
    var_19 |= (-(((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)30857))))) ? (max((((/* implicit */long long int) (_Bool)0)), (-13LL))) : (var_6))));
}
