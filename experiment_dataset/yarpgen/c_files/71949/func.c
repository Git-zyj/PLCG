/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71949
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned char i_2 = 0; i_2 < 20; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) ((short) arr_3 [i_0] [i_0])))))) ? (((/* implicit */int) ((((var_12) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)0))) : (18177119958207367545ULL))) <= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 269624115502184070ULL)) ? (((/* implicit */long long int) arr_3 [i_0] [i_2])) : (5842618421786481372LL))))))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_2 [i_2] [i_1] [i_0])) : (((/* implicit */int) (_Bool)0))))));
                    var_14 = ((/* implicit */short) max((((max((var_8), (((/* implicit */unsigned long long int) var_10)))) < (((/* implicit */unsigned long long int) max((-5842618421786481373LL), (((/* implicit */long long int) var_5))))))), (((_Bool) arr_4 [i_0] [i_0] [i_0] [i_0]))));
                    arr_6 [i_1] [i_1] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [i_2])) ? (0U) : (arr_3 [i_2] [17])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 269624115502184070ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)127))) : (408468812765121424LL)))) ? (((/* implicit */int) (unsigned char)127)) : ((~(((/* implicit */int) arr_0 [i_1]))))))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_3 = 0; i_3 < 22; i_3 += 3) 
    {
        for (signed char i_4 = 0; i_4 < 22; i_4 += 2) 
        {
            {
                /* LoopNest 3 */
                for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                {
                    for (signed char i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned char) (-(1310228550U)));
                                var_16 += ((((/* implicit */_Bool) min(((short)0), (((/* implicit */short) arr_16 [i_7 - 1] [i_7] [i_7] [i_7 - 1] [i_6] [i_6]))))) && (((/* implicit */_Bool) ((((((/* implicit */_Bool) 18177119958207367545ULL)) || (((/* implicit */_Bool) arr_15 [i_3] [i_4] [i_5])))) ? (((/* implicit */int) ((_Bool) (_Bool)1))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_4] [i_4] [i_7] [i_7])))))))));
                                arr_21 [i_3] [(unsigned char)10] [i_5] [i_6] [i_4] |= ((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) arr_20 [i_3] [i_4] [i_4] [i_5] [i_6] [i_6] [i_7 - 1])) ? (var_7) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_4] [i_4] [i_5] [i_6] [i_7 - 1])))));
                                arr_22 [i_3] [i_3] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-1))) / ((((_Bool)0) ? (((/* implicit */unsigned long long int) 5842618421786481372LL)) : (((((/* implicit */_Bool) arr_13 [i_5] [i_6])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))) : (0ULL)))))));
                            }
                        } 
                    } 
                } 
                var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) arr_15 [i_3] [i_3] [i_4]))));
                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) ((var_9) * (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_14 [i_3] [i_3] [i_4] [i_4])) || (var_12))) ? (((/* implicit */int) arr_14 [i_3] [i_3] [i_3] [i_3])) : (((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3]))))))))));
            }
        } 
    } 
    var_19 = (-(max((((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) * (0ULL))), (var_2))));
    var_20 = (signed char)86;
}
