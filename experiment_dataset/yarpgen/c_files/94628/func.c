/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 94628
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=94628 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/94628
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
    var_10 = ((/* implicit */signed char) max((max((((/* implicit */int) ((short) 15899272582198552274ULL))), (var_5))), ((~(((/* implicit */int) var_8))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 2) 
    {
        for (int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                var_11 += ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) 15899272582198552274ULL))) ? (2547471491510999329ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 15899272582198552274ULL)))))))))));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 14; i_2 += 1) 
                {
                    for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */int) max((var_12), (min((((/* implicit */int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_1 [2U]))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 2547471491510999342ULL)) ? (15899272582198552275ULL) : (2547471491510999372ULL))))))), (((((/* implicit */int) arr_10 [i_0] [(_Bool)1] [i_2] [i_3 - 1])) - (((int) 2547471491510999342ULL))))))));
                            var_13 *= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 15899272582198552273ULL))))), (((15899272582198552247ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))));
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (short i_4 = 3; i_4 < 14; i_4 += 2) 
                {
                    arr_15 [i_4] [i_1] [i_0] [i_4] = ((/* implicit */unsigned long long int) min((((/* implicit */int) ((short) 2547471491510999340ULL))), ((-((+(((/* implicit */int) var_8))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_5 = 3; i_5 < 14; i_5 += 4) 
                    {
                        arr_18 [i_0] [i_0] [i_4 + 1] [i_0] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) 2547471491510999354ULL))));
                        var_14 = ((/* implicit */long long int) 15899272582198552238ULL);
                    }
                    for (short i_6 = 1; i_6 < 14; i_6 += 1) 
                    {
                        arr_21 [(short)11] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((unsigned char) 2547471491510999341ULL));
                        arr_22 [i_4] [i_1] [(signed char)10] [i_6 - 1] = ((/* implicit */unsigned char) ((15899272582198552236ULL) < (min((2547471491510999382ULL), (15899272582198552282ULL)))));
                        arr_23 [i_4] [i_4] [i_4 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2547471491510999349ULL)) ? (2547471491510999341ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 15899272582198552236ULL)))) ^ (15899272582198552283ULL)))));
                        arr_24 [i_4] [i_4] [i_1] [i_4] = ((/* implicit */int) max((((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_8 [i_4 - 2] [i_4 - 2]))))), (15899272582198552296ULL)));
                    }
                    for (unsigned long long int i_7 = 2; i_7 < 12; i_7 += 4) 
                    {
                        arr_28 [i_0] [7ULL] [i_4 - 1] [i_4] = ((/* implicit */unsigned long long int) max((((((/* implicit */int) ((unsigned short) var_9))) << ((((~(((/* implicit */int) var_1)))) + (99))))), (((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) var_1)), (2547471491510999362ULL)))))));
                        var_15 -= ((/* implicit */short) (-(2547471491510999379ULL)));
                    }
                }
            }
        } 
    } 
}
