/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 67280
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=67280 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/67280
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
    var_11 = ((/* implicit */long long int) ((unsigned long long int) var_7));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            for (unsigned char i_2 = 1; i_2 < 9; i_2 += 3) 
            {
                {
                    arr_7 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) max((7080809602943480216LL), (((/* implicit */long long int) (-(((/* implicit */int) (signed char)120)))))))) ? (((/* implicit */unsigned long long int) max((1757354976550378689LL), (((/* implicit */long long int) 3305771919U))))) : (((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_0] [(unsigned short)10])) ? (((/* implicit */unsigned long long int) -7080809602943480200LL)) : (((unsigned long long int) -7080809602943480216LL))))));
                    arr_8 [i_0] [(signed char)0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */int) ((short) arr_0 [i_2 + 3] [i_2 + 1]))) & (((/* implicit */int) (signed char)-35))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (int i_3 = 3; i_3 < 12; i_3 += 4) 
    {
        for (long long int i_4 = 0; i_4 < 14; i_4 += 2) 
        {
            {
                arr_14 [i_3] = var_8;
                arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(arr_9 [i_3])))) ? (((((/* implicit */_Bool) 144115179485921280ULL)) ? (((/* implicit */unsigned long long int) 7080809602943480230LL)) : (13800573748271907572ULL))) : (((/* implicit */unsigned long long int) (-(arr_11 [i_3]))))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) -1757354976550378692LL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_10 [0LL] [i_3]))))), (((((/* implicit */_Bool) arr_11 [i_3])) ? (arr_11 [2ULL]) : (989195377U)))))) : (((18446744073709551594ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 - 3] [i_3 + 2])))))));
                arr_16 [i_4] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(989195395U))))));
            }
        } 
    } 
}
