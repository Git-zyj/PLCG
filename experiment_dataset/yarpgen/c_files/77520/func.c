/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 77520
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=77520 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/77520
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
    for (long long int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned int i_1 = 0; i_1 < 18; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                for (int i_3 = 0; i_3 < 18; i_3 += 4) 
                {
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        {
                            arr_11 [i_0] [i_1] [0] [i_2] [i_1] [i_4] [i_0] = ((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) arr_9 [i_4] [i_4] [i_3] [i_2] [i_1] [12ULL])), (var_5))))) < (arr_3 [i_0] [i_1]))) && (((/* implicit */_Bool) (~(var_1))))));
                            arr_12 [i_0] [i_1] [i_0] [i_1] [i_4] [i_3] = ((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_2] [i_3] [i_1])), (var_2)))));
                            var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) min((((/* implicit */signed char) var_7)), (var_12))))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [12] = ((min((7588166184304611304LL), (((long long int) 7588166184304611304LL)))) / (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1]))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (int i_5 = 0; i_5 < 18; i_5 += 3) 
        {
            arr_17 [i_0] [i_5] = (-(((((/* implicit */int) arr_6 [i_5] [i_5] [i_5] [i_0])) * (((/* implicit */int) (signed char)-86)))));
            arr_18 [i_0] [i_0] [i_5] = ((/* implicit */long long int) ((unsigned short) arr_5 [i_0] [i_5] [i_5]));
            /* LoopNest 3 */
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                for (signed char i_7 = 0; i_7 < 18; i_7 += 4) 
                {
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        {
                            arr_27 [i_0] [i_5] [(unsigned short)6] [i_5] [i_8] = ((/* implicit */unsigned int) ((var_13) % (arr_1 [i_5])));
                            var_15 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_0]))) <= (arr_22 [i_8] [i_8 - 1])));
                        }
                    } 
                } 
            } 
        }
        arr_28 [i_0] [i_0] = ((/* implicit */signed char) var_7);
        arr_29 [i_0] [i_0] = ((/* implicit */unsigned short) ((int) max((arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]), (var_8))));
    }
    for (long long int i_9 = 0; i_9 < 10; i_9 += 3) 
    {
        var_16 -= ((/* implicit */short) (~(max((11988163792272700544ULL), (((/* implicit */unsigned long long int) arr_7 [i_9] [i_9] [i_9] [i_9] [i_9] [i_9]))))));
        arr_32 [i_9] = ((unsigned long long int) ((long long int) var_1));
    }
    var_17 = ((/* implicit */unsigned short) min((((((/* implicit */unsigned long long int) min((1128580888U), (((/* implicit */unsigned int) (_Bool)1))))) * (var_0))), (((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) var_13))))))))));
    var_18 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) (~(var_8))))))) * (((((/* implicit */_Bool) ((unsigned long long int) var_12))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))) : (((/* implicit */int) var_11))))));
}
