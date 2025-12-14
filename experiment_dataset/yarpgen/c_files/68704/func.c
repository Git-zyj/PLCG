/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 68704
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=68704 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/68704
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
    var_15 = ((/* implicit */long long int) var_8);
    /* LoopSeq 1 */
    for (short i_0 = 0; i_0 < 22; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) max(((unsigned short)32767), ((unsigned short)32761)));
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 22; i_1 += 3) /* same iter space */
        {
            arr_7 [i_0] [i_0] [i_1] = ((/* implicit */unsigned short) arr_3 [i_0]);
            var_16 *= ((/* implicit */_Bool) ((((/* implicit */long long int) arr_5 [i_0] [i_1] [7LL])) ^ (((((arr_3 [(signed char)12]) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)32756))))) + (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_14))) + (arr_5 [i_0] [i_0] [i_1]))))))));
        }
        for (short i_2 = 0; i_2 < 22; i_2 += 3) /* same iter space */
        {
            arr_10 [i_0] = ((/* implicit */signed char) (short)30996);
            /* LoopNest 2 */
            for (unsigned long long int i_3 = 3; i_3 < 18; i_3 += 2) 
            {
                for (unsigned long long int i_4 = 1; i_4 < 20; i_4 += 4) 
                {
                    {
                        arr_15 [i_0] [i_0] [16LL] [i_4] [12ULL] &= ((/* implicit */int) arr_6 [i_3] [(unsigned short)15]);
                        arr_16 [i_3] [i_2] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) min((var_10), (((/* implicit */long long int) arr_9 [i_0] [i_3 + 1] [i_3 - 2]))));
                        var_17 = ((/* implicit */int) max((var_17), (((/* implicit */int) var_0))));
                        arr_17 [i_0] [i_2] [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) var_1);
                        arr_18 [i_0] [i_2] [i_3] [i_0] [i_4] [i_2] = ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_12 [i_0])) & (((/* implicit */int) ((short) var_8)))))) * (((((/* implicit */unsigned long long int) arr_0 [i_0] [i_3])) - (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_2] [2] [i_4 - 1]))) & (arr_8 [i_0] [i_3] [i_0]))))));
                    }
                } 
            } 
            arr_19 [i_0] [(unsigned short)0] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) arr_6 [i_0] [i_0])))));
            var_18 = ((/* implicit */short) min(((!(((/* implicit */_Bool) (+(arr_8 [i_0] [i_0] [i_2])))))), ((_Bool)1)));
        }
    }
}
