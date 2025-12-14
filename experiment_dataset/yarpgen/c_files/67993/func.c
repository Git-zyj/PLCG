/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67993
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67993 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67993
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
    var_20 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(4611686018360279040LL)))) ? (max((((/* implicit */long long int) var_2)), (min((((/* implicit */long long int) var_7)), (-4611686018360279041LL))))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) min((var_12), (((/* implicit */short) var_1))))), ((unsigned short)62571)))))));
    var_21 = ((/* implicit */_Bool) min((min((((long long int) 12344766298823835716ULL)), (((/* implicit */long long int) ((((/* implicit */int) var_7)) < (((/* implicit */int) var_2))))))), (((/* implicit */long long int) var_13))));
    var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) 6101977774885715900ULL)) && (((/* implicit */_Bool) -4611686018360279041LL))));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) 6101977774885715900ULL);
        arr_3 [i_0] = ((/* implicit */unsigned int) 12344766298823835716ULL);
    }
    for (unsigned char i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned int) -4611686018360279041LL);
        arr_7 [i_1] = ((/* implicit */unsigned short) ((max((12344766298823835716ULL), (((/* implicit */unsigned long long int) (short)-2048)))) == (((/* implicit */unsigned long long int) var_10))));
    }
    for (unsigned char i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        arr_11 [i_2] = ((/* implicit */short) min((-4611686018360279040LL), (((/* implicit */long long int) min(((_Bool)1), (var_15))))));
        /* LoopSeq 1 */
        for (short i_3 = 0; i_3 < 20; i_3 += 2) 
        {
            /* LoopNest 2 */
            for (short i_4 = 1; i_4 < 16; i_4 += 3) 
            {
                for (int i_5 = 0; i_5 < 20; i_5 += 4) 
                {
                    {
                        arr_20 [i_2] [i_4] [i_4] [i_5] = ((/* implicit */_Bool) ((((/* implicit */int) var_17)) >> (((/* implicit */int) var_5))));
                        /* LoopSeq 1 */
                        for (unsigned long long int i_6 = 1; i_6 < 19; i_6 += 2) 
                        {
                            arr_25 [i_2] [i_3] [i_2] [i_5] [i_4] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) arr_9 [i_2] [i_3]))));
                            arr_26 [i_2] [i_3] [i_3] [i_2] [i_4] = ((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_0))) * (var_10))) * (((/* implicit */unsigned int) arr_24 [i_2] [i_2] [i_4]))));
                            arr_27 [i_4] [i_3] [3ULL] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) ((_Bool) var_13)))) <= (max((((/* implicit */long long int) (short)10617)), (-4611686018360279041LL)))));
                        }
                        arr_28 [i_2] [i_5] [i_4 + 1] [18LL] = ((/* implicit */unsigned char) ((6101977774885715900ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))));
                    }
                } 
            } 
            arr_29 [i_2] [i_3] = var_15;
        }
    }
}
