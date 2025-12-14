/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 70583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=70583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/70583
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
    var_11 = ((/* implicit */int) min((var_6), (((/* implicit */short) var_5))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] = ((/* implicit */_Bool) (-(var_1)));
                /* LoopNest 2 */
                for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 3) 
                {
                    for (int i_3 = 2; i_3 < 12; i_3 += 4) 
                    {
                        {
                            var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) ((((/* implicit */int) var_9)) | (((((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))) ^ (((798002222) | (-798002222))))))))));
                            var_13 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((arr_2 [i_3 + 3]) ? (((arr_3 [i_0] [i_1] [i_2]) << (((var_1) + (6476857659914032029LL))))) : (((/* implicit */unsigned long long int) max((-798002222), (798002227)))))))));
                            var_14 = ((((/* implicit */_Bool) min((min((arr_8 [i_3] [i_3] [i_3] [i_3]), (798002222))), (arr_8 [i_3 + 3] [i_3 + 3] [i_3 + 4] [i_3 + 2])))) && (((max((var_5), (var_9))) && (((/* implicit */_Bool) arr_1 [i_1])))));
                            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((int) (unsigned short)1)) : (((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_6))))))) || (max((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) var_3)))), (var_9)))));
                            arr_9 [i_0] = ((/* implicit */unsigned int) arr_3 [i_2] [i_1] [i_0]);
                        }
                    } 
                } 
                var_16 = ((/* implicit */_Bool) ((((arr_3 [i_0] [i_0] [i_0]) << (((/* implicit */int) arr_2 [i_0])))) & (max((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */unsigned long long int) 33554431U)) ^ (arr_3 [i_0] [i_1] [i_1])))))));
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned long long int) max((var_17), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (-(((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (0U)))))))))));
    /* LoopSeq 2 */
    for (unsigned short i_4 = 0; i_4 < 25; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 2; i_5 < 24; i_5 += 1) 
        {
            for (short i_6 = 0; i_6 < 25; i_6 += 3) 
            {
                {
                    arr_17 [i_4] [i_5] [i_6] = ((/* implicit */unsigned short) ((arr_11 [i_4] [i_5 - 2]) || (((arr_11 [i_4] [i_5 - 2]) && (arr_11 [i_6] [i_5 - 2])))));
                    arr_18 [i_4] [i_4] [i_4] = ((/* implicit */int) (!(((/* implicit */_Bool) max((((/* implicit */int) var_2)), (min((-798002220), (((/* implicit */int) arr_10 [i_4])))))))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 21; i_7 += 1) 
        {
            for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                    {
                        arr_26 [i_4] [i_7] [i_7] [i_7] [i_8] [i_9] = ((/* implicit */unsigned int) arr_16 [i_4] [i_7] [i_4]);
                        arr_27 [i_8] = ((/* implicit */int) max((min((((/* implicit */unsigned long long int) max((((/* implicit */int) var_2)), (-1837916968)))), (max((arr_16 [i_9] [i_7 + 1] [i_4]), (arr_20 [i_8]))))), (((/* implicit */unsigned long long int) arr_25 [i_8] [i_7] [i_8] [i_4] [i_4] [i_7]))));
                        arr_28 [i_4] [i_4] [i_4] [i_4] [i_4] [i_8] = ((/* implicit */unsigned int) ((int) arr_12 [i_7]));
                        arr_29 [i_4] [i_4] [i_8] [i_8] [i_9] [i_4] = ((/* implicit */long long int) (((+(max((((/* implicit */unsigned int) var_2)), (1069547520U))))) + (((/* implicit */unsigned int) (-(arr_14 [i_4]))))));
                    }
                    var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((_Bool) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) arr_13 [i_7 + 4])) : (var_10))) & ((~(arr_20 [i_4])))))))));
                }
            } 
        } 
        var_19 = arr_13 [i_4];
    }
    for (int i_10 = 0; i_10 < 24; i_10 += 1) 
    {
        var_20 = ((/* implicit */unsigned int) arr_16 [i_10] [i_10] [i_10]);
        /* LoopNest 2 */
        for (unsigned char i_11 = 0; i_11 < 24; i_11 += 2) 
        {
            for (unsigned int i_12 = 0; i_12 < 24; i_12 += 3) 
            {
                {
                    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) (-(((/* implicit */int) max((((/* implicit */unsigned short) var_8)), (arr_36 [i_11]))))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)30)) ? (((/* implicit */unsigned int) 798002235)) : (0U))))));
                    var_22 -= ((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */int) var_9)) | (((/* implicit */int) arr_33 [i_10])))) : ((~(((/* implicit */int) arr_10 [i_10]))))));
                    arr_37 [i_10] [i_10] = ((/* implicit */int) ((min((((arr_21 [i_10] [i_10]) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_34 [i_10] [i_11] [i_12])))), (((/* implicit */int) ((1803533484) >= (-327293601)))))) == (((/* implicit */int) (_Bool)1))));
                }
            } 
        } 
    }
}
