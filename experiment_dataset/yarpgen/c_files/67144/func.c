/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67144
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned int) var_10);
        arr_2 [i_0] = ((/* implicit */unsigned int) ((int) min((((/* implicit */unsigned long long int) 137002785)), (0ULL))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) max((max((2555531434U), (((/* implicit */unsigned int) (~(-137002786)))))), (((unsigned int) arr_0 [i_0]))));
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((((var_6) ? (((/* implicit */int) (unsigned short)46656)) : (((/* implicit */int) var_10)))) / (137002800)))), (arr_1 [i_0])));
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 14; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            var_12 ^= ((/* implicit */int) ((3637645316U) / (657321979U)));
                            var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)32767))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_3]))) : ((~(arr_11 [i_0])))));
                        }
                        var_14 ^= ((/* implicit */unsigned int) var_0);
                        arr_15 [i_0] [i_2] [i_2] [i_3] [i_1] [i_0] = ((/* implicit */_Bool) min((((((/* implicit */int) arr_0 [i_1])) | (((/* implicit */int) ((_Bool) arr_13 [i_2]))))), (((/* implicit */int) arr_10 [i_0]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (signed char i_5 = 0; i_5 < 14; i_5 += 2) 
            {
                var_15 -= ((/* implicit */signed char) var_4);
                var_16 *= ((/* implicit */short) ((_Bool) var_1));
            }
            var_17 = ((/* implicit */int) min(((+(((((/* implicit */_Bool) (signed char)-123)) ? (3637645317U) : (arr_11 [(_Bool)1]))))), (((/* implicit */unsigned int) ((((/* implicit */int) arr_16 [i_0] [i_0] [(_Bool)1] [i_0])) / (var_0))))));
        }
        var_18 = ((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0]);
    }
    var_19 *= ((/* implicit */unsigned char) min((((/* implicit */short) (_Bool)0)), ((short)(-32767 - 1))));
}
