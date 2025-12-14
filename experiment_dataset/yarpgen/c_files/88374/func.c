/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88374
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (signed char i_2 = 0; i_2 < 20; i_2 += 1) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */signed char) (unsigned short)16219);
                            /* LoopSeq 1 */
                            for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                            {
                                var_21 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [(unsigned short)2] [(unsigned short)2] [i_2])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((26U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)17665)))))) ? (min((((/* implicit */unsigned int) (_Bool)1)), (var_19))) : (var_17))))));
                                arr_12 [11] [i_1] [i_0] [i_1] [(_Bool)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [11LL] [i_2] [i_4])) ? (-733632846) : (((((/* implicit */_Bool) min((1824971121), (((/* implicit */int) (short)0))))) ? (((/* implicit */int) max((var_8), (((/* implicit */short) arr_8 [i_4]))))) : (((((/* implicit */_Bool) 1257832067)) ? (-1824971121) : (1824971121)))))));
                                var_22 = ((/* implicit */unsigned short) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0]);
                            }
                        }
                    } 
                } 
                var_23 = ((/* implicit */int) var_8);
                var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((((-1824971121) % (((/* implicit */int) (unsigned char)135)))) + (2147483647))) >> (((var_16) / (var_16)))))) ? (arr_6 [i_0]) : (((((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned int) -1824971122)) : (var_11))) - (((/* implicit */unsigned int) ((-1824971131) + (1824971136))))))));
            }
        } 
    } 
    var_25 = (-(max((min((((/* implicit */unsigned int) var_8)), (var_17))), (var_11))));
    var_26 &= ((/* implicit */short) ((((/* implicit */int) var_4)) == (((((/* implicit */int) (unsigned char)119)) << ((((+(var_11))) - (2751952482U)))))));
}
