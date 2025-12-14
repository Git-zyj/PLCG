/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83841
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83841 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83841
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
    for (unsigned long long int i_0 = 2; i_0 < 9; i_0 += 4) 
    {
        var_10 = ((/* implicit */unsigned int) ((((/* implicit */int) var_5)) < (((/* implicit */int) (!(((/* implicit */_Bool) 15672740175079723115ULL)))))));
        var_11 = ((/* implicit */long long int) arr_2 [i_0] [i_0 - 2]);
        /* LoopNest 2 */
        for (long long int i_1 = 3; i_1 < 10; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_1] = ((/* implicit */unsigned long long int) max((max((30LL), (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [(short)1]))) > (1864270961U)))))), (((long long int) ((_Bool) var_9)))));
                    var_12 = ((/* implicit */_Bool) min((var_12), (((/* implicit */_Bool) min((((/* implicit */long long int) (_Bool)1)), (-3783632094287016489LL))))));
                    arr_9 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (~(min((((/* implicit */long long int) (!((_Bool)1)))), (min((8161579249021560700LL), (var_6)))))));
                }
            } 
        } 
    }
    var_13 = (-(((((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_8)))) ? (min((var_1), (((/* implicit */unsigned long long int) var_6)))) : (((/* implicit */unsigned long long int) var_6)))));
    var_14 = var_1;
    /* LoopNest 2 */
    for (unsigned int i_3 = 1; i_3 < 14; i_3 += 3) 
    {
        for (long long int i_4 = 2; i_4 < 16; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_5 = 2; i_5 < 17; i_5 += 3) 
                {
                    var_15 |= ((/* implicit */_Bool) (+(((long long int) ((((/* implicit */int) var_4)) * (((/* implicit */int) arr_13 [i_3] [i_3] [i_5])))))));
                    arr_17 [i_3] [i_3] [5LL] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) arr_12 [13LL] [13LL] [i_5 + 1])), (4197058622266477822ULL))), (((((/* implicit */_Bool) -7297317362220192865LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (var_8)))))) ? (arr_10 [16LL]) : (min((((/* implicit */unsigned long long int) (+(var_7)))), (arr_11 [i_5 - 2])))));
                    arr_18 [i_3] [i_4] [i_5 + 1] [i_5 + 1] = ((/* implicit */unsigned long long int) min((3156695552U), (((/* implicit */unsigned int) (_Bool)0))));
                }
                var_16 |= ((/* implicit */_Bool) 2251799813677056ULL);
            }
        } 
    } 
    var_17 = ((/* implicit */long long int) var_0);
}
