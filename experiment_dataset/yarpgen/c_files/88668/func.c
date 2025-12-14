/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88668
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
    var_17 &= var_10;
    var_18 = ((/* implicit */unsigned short) min((((/* implicit */int) (short)21537)), ((+((+(((/* implicit */int) (short)-21537))))))));
    var_19 = ((/* implicit */long long int) var_4);
    /* LoopSeq 1 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) /* same iter space */
            {
                var_20 ^= ((((/* implicit */int) var_5)) % (((/* implicit */int) arr_1 [i_0] [i_1])));
                var_21 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-10))));
            }
            for (unsigned char i_3 = 0; i_3 < 24; i_3 += 1) /* same iter space */
            {
                arr_11 [i_0] [i_0] [i_3] = ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-21555)) : (((/* implicit */int) (signed char)45)));
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((signed char) arr_7 [i_0] [i_1] [i_3])))));
                arr_12 [i_0] [i_0] [i_0] = ((/* implicit */signed char) arr_9 [i_0] [i_0] [i_1] [i_3]);
                var_23 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [(short)12] [(short)12])) != (((/* implicit */int) (unsigned short)11412))));
            }
            for (unsigned char i_4 = 0; i_4 < 24; i_4 += 1) /* same iter space */
            {
                arr_17 [i_0] = ((/* implicit */int) arr_0 [(_Bool)1]);
                arr_18 [i_0] [i_0] [i_4] = ((/* implicit */short) ((((5301142698745174655ULL) & (((/* implicit */unsigned long long int) arr_9 [i_0] [i_1] [i_1] [i_4])))) == (((/* implicit */unsigned long long int) arr_6 [i_0] [i_1] [i_4]))));
                var_24 = ((/* implicit */long long int) arr_16 [i_0] [i_1] [i_4]);
                var_25 = ((/* implicit */unsigned short) (short)21543);
            }
            arr_19 [i_0] = ((/* implicit */int) arr_0 [i_0]);
            var_26 = ((/* implicit */long long int) ((arr_4 [i_0] [i_0] [i_1]) - (arr_4 [i_0] [i_0] [i_0])));
        }
        arr_20 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)21554), (((/* implicit */short) (signed char)11))))), (var_14)))), (((((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_0])) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_4 [i_0] [i_0] [i_0])))));
    }
}
