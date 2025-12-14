/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59145
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
    for (unsigned char i_0 = 2; i_0 < 8; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 10; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) ((max((((((/* implicit */_Bool) arr_2 [9U] [i_1] [i_1])) ? (((/* implicit */long long int) var_1)) : (-3237916863848896829LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) 3237916863848896828LL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))))) % (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)249))) != (arr_1 [i_0 - 1])))))));
                arr_6 [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */int) arr_3 [i_0 - 2])) ^ (((/* implicit */int) arr_3 [i_0 - 1])))), (((/* implicit */int) var_6))));
                arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) arr_1 [i_0 + 1]);
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned int i_2 = 0; i_2 < 16; i_2 += 3) 
    {
        for (long long int i_3 = 3; i_3 < 15; i_3 += 3) 
        {
            {
                arr_13 [10] [i_2] = ((/* implicit */int) min(((_Bool)1), (min(((!(((/* implicit */_Bool) 5746746983020602832ULL)))), ((!(var_4)))))));
                arr_14 [i_2] [(short)6] [i_3 - 2] = ((/* implicit */long long int) 0U);
                /* LoopSeq 1 */
                for (unsigned int i_4 = 0; i_4 < 16; i_4 += 3) 
                {
                    arr_17 [i_2] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 14559859754918099226ULL)) ? (1836584583535971458ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19680)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) (short)31883))) : (-3237916863848896829LL))))) ^ (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                    arr_18 [i_2] [i_3 - 2] = ((/* implicit */long long int) min((((/* implicit */short) ((((/* implicit */int) var_4)) <= (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), (var_6))))))), ((short)31883)));
                    arr_19 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */unsigned long long int) (-(((long long int) 0))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (-4493328129468165881LL) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2])))))) ? (min((((/* implicit */unsigned long long int) (short)-16263)), (0ULL))) : (((/* implicit */unsigned long long int) 932717989388602205LL))))));
                }
                arr_20 [(short)14] [i_3] [i_3] = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_8)), (max((((/* implicit */unsigned long long int) 216194586U)), (11929441307433489989ULL)))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (2351321737U) : (arr_11 [i_3 + 1] [i_2] [i_2])))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_8))))));
            }
        } 
    } 
}
