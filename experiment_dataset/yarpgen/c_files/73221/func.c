/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 73221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=73221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/73221
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
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 13; i_0 += 3) 
    {
        var_15 = ((/* implicit */_Bool) var_2);
        arr_2 [i_0] = ((/* implicit */unsigned short) ((int) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0 - 2]), (((/* implicit */unsigned short) (unsigned char)39))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (-9191450469020048902LL))) : (7378411708277554158LL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            var_16 -= ((/* implicit */long long int) (((+(((/* implicit */int) (short)8191)))) - (((((((/* implicit */int) arr_0 [i_0] [i_1])) + (2147483647))) << (((((-9191450469020048902LL) + (9191450469020048921LL))) - (19LL)))))));
            arr_5 [i_0] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_0 [i_1] [i_0]))))) ? (((unsigned long long int) var_8)) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (-9191450469020048902LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))) / (-9191450469020048902LL))) : (((/* implicit */long long int) ((/* implicit */int) var_4))));
            /* LoopSeq 1 */
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                /* LoopSeq 2 */
                for (int i_3 = 2; i_3 < 14; i_3 += 4) 
                {
                    var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */long long int) (~(((/* implicit */int) var_11))))) == (arr_6 [i_1] [i_2])))) << (((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_9 [1U] [i_1] [i_1] [i_1] [i_1])) ? (arr_6 [i_3] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))) >= (((((/* implicit */_Bool) -177298482050166899LL)) ? (((/* implicit */unsigned long long int) -1890425252)) : (1485077187047799152ULL)))))))))));
                    arr_10 [i_0] [i_0 + 2] [i_0] [13LL] [(signed char)3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_0 [i_0 + 1] [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((short) 9191450469020048876LL)))) / (max((var_3), (((/* implicit */unsigned long long int) arr_4 [(short)0] [i_0 + 1])))))));
                }
                for (unsigned char i_4 = 1; i_4 < 14; i_4 += 2) 
                {
                    var_18 = ((/* implicit */short) (+(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_1 [i_0 - 2] [i_4 + 1])))))) < (((((/* implicit */unsigned long long int) ((/* implicit */int) var_9))) + (0ULL))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 15; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned long long int) max((var_19), (((/* implicit */unsigned long long int) (unsigned short)33671))));
                        var_20 -= ((/* implicit */short) var_13);
                        arr_15 [i_0] [i_0] = max((((/* implicit */unsigned long long int) -402562701)), (8366113754894006626ULL));
                    }
                }
                var_21 -= ((/* implicit */short) max((arr_8 [10] [i_1] [i_2] [i_1] [i_0 + 2] [i_2]), (((/* implicit */unsigned long long int) (~(max((9191450469020048876LL), (((/* implicit */long long int) var_11)))))))));
                /* LoopNest 2 */
                for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                {
                    for (int i_7 = 0; i_7 < 15; i_7 += 3) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) ((-402562701) & (402562695)));
                            var_23 = ((/* implicit */int) 9191450469020048864LL);
                        }
                    } 
                } 
            }
        }
    }
    /* vectorizable */
    for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 4) 
    {
        var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned short) var_3)))));
        var_25 -= (unsigned char)255;
        var_26 -= ((/* implicit */short) arr_22 [i_8]);
    }
    var_27 = max((9191450469020048876LL), (((/* implicit */long long int) ((signed char) ((((/* implicit */_Bool) 402562695)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) var_0))))))));
    var_28 = ((/* implicit */unsigned int) var_6);
}
