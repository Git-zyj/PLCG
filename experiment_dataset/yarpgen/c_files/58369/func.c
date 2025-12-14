/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 58369
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=58369 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/58369
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
    var_11 += ((/* implicit */unsigned char) max((((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_8)))), (((/* implicit */int) ((unsigned short) ((_Bool) var_3))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 4; i_3 < 22; i_3 += 3) 
                    {
                        {
                            var_12 = ((/* implicit */signed char) var_7);
                            arr_11 [i_0] [i_1] [i_0] [i_3 + 1] = ((/* implicit */short) min((((/* implicit */long long int) (+((~(((/* implicit */int) var_1))))))), (var_3)));
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (int i_4 = 0; i_4 < 25; i_4 += 4) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (unsigned long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                        {
                            {
                                arr_19 [i_0] [i_5] [(unsigned short)23] [i_0] = ((((/* implicit */_Bool) max((((((/* implicit */int) arr_4 [15] [i_1] [i_4])) | (((/* implicit */int) var_10)))), (((/* implicit */int) arr_9 [i_0]))))) ? (((/* implicit */int) arr_5 [i_0] [i_1] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) max((8841127410933692600LL), (((/* implicit */long long int) (_Bool)1)))))))));
                                arr_20 [i_6] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_9 [i_0])) : (((/* implicit */int) (_Bool)1))))) || ((!(((/* implicit */_Bool) arr_13 [i_0]))))))) ^ (((/* implicit */int) ((((/* implicit */int) arr_4 [i_6] [i_5] [i_0])) >= (((/* implicit */int) arr_7 [i_4])))))));
                                var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-6158))) - (var_9))), (((/* implicit */unsigned long long int) var_10)))))));
                            }
                        } 
                    } 
                } 
                var_14 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_1 [i_0])))) % (((/* implicit */int) arr_1 [i_0]))));
                var_15 = ((/* implicit */unsigned char) min((var_15), (((/* implicit */unsigned char) ((max((((/* implicit */long long int) (_Bool)0)), (8841127410933692600LL))) & (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_0] [i_0])))))) == (arr_6 [23ULL] [9LL] [9LL] [i_1]))))))))));
                arr_21 [(_Bool)1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((var_9) + (2441620901316656314ULL))) - (((((/* implicit */_Bool) 9223372036854775807LL)) ? (var_0) : (((/* implicit */unsigned long long int) arr_0 [i_0]))))))) ? (((((/* implicit */_Bool) min((arr_17 [i_0] [i_1]), (((/* implicit */long long int) (short)-512))))) ? ((+(((/* implicit */int) (unsigned char)239)))) : (((/* implicit */int) arr_5 [i_1] [i_0] [i_0])))) : (((/* implicit */int) ((min((arr_6 [i_0] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) arr_13 [i_0])))) != (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) arr_8 [i_0] [18ULL] [i_0])) : (((/* implicit */int) arr_4 [i_0] [(unsigned short)21] [i_0]))))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)23354))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (max((var_9), (var_0))))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_8))))))))));
}
