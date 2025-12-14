/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 99827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=99827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/99827
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
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 2) 
    {
        var_16 = ((/* implicit */signed char) (-((+(((/* implicit */int) ((unsigned short) (signed char)97)))))));
        var_17 = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) (unsigned char)245)) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (unsigned char)11))))))));
    }
    var_18 += ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)255)) != ((-(var_1)))));
    /* LoopSeq 1 */
    for (int i_1 = 0; i_1 < 19; i_1 += 4) 
    {
        /* LoopNest 3 */
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (unsigned long long int i_3 = 0; i_3 < 19; i_3 += 2) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 4) 
                {
                    {
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) min(((+(((/* implicit */int) (unsigned char)245)))), (((/* implicit */int) max(((unsigned char)244), (arr_9 [i_4] [i_4] [i_3] [i_2] [i_2] [i_1])))))))));
                        arr_11 [i_1] [i_2] [i_2] [i_4] [i_1] = ((/* implicit */int) ((min((((((/* implicit */_Bool) 2836831180U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)245))) : (124U))), (((/* implicit */unsigned int) ((unsigned char) (unsigned char)12))))) | (((/* implicit */unsigned int) ((/* implicit */int) (signed char)60)))));
                        var_20 = ((/* implicit */int) min((((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)254))))), (max((((/* implicit */unsigned int) arr_2 [i_2] [i_4])), (2776478981U)))));
                    }
                } 
            } 
        } 
        arr_12 [i_1] [8U] = ((/* implicit */signed char) (~((-(arr_7 [i_1] [i_1] [i_1])))));
        var_21 += ((/* implicit */unsigned short) (~(-1925703856)));
    }
    var_22 = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) var_11)) ? ((-(6818312860368056292ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) >= (995467415U))))))));
    var_23 = ((/* implicit */unsigned int) 1476510017);
}
