/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 93287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=93287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/93287
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
    for (int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                arr_4 [(signed char)6] = ((/* implicit */unsigned short) (~((~(((((/* implicit */_Bool) var_10)) ? (arr_0 [i_0] [9ULL]) : (((/* implicit */int) (short)-5543))))))));
                var_20 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */int) (short)5542)) <= (((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))));
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0] [i_1] [i_0])) ? (((/* implicit */int) var_0)) : (((((/* implicit */_Bool) arr_0 [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_1 [i_0] [(short)10])) : (arr_0 [(_Bool)1] [(_Bool)1])))))) ? (((/* implicit */unsigned long long int) min((((((/* implicit */int) (signed char)0)) - (((/* implicit */int) (short)5542)))), (((/* implicit */int) arr_1 [i_0] [i_1]))))) : (max((min((var_5), (((/* implicit */unsigned long long int) var_13)))), (((/* implicit */unsigned long long int) arr_0 [i_1] [i_0]))))));
                var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) min((min((((((/* implicit */_Bool) (short)508)) ? (15LL) : (((/* implicit */long long int) -1872940283)))), (((/* implicit */long long int) arr_1 [i_0] [i_1])))), ((-(max((((/* implicit */long long int) arr_2 [i_0] [i_0] [i_1])), (26LL))))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_2 = 1; i_2 < 17; i_2 += 1) 
    {
        for (short i_3 = 0; i_3 < 18; i_3 += 2) 
        {
            {
                var_22 = ((/* implicit */short) ((((/* implicit */int) ((short) arr_10 [i_2 + 1]))) * (((/* implicit */int) ((((/* implicit */int) max((arr_7 [i_2] [(short)9]), (arr_7 [11ULL] [i_2])))) != ((+(((/* implicit */int) arr_7 [i_2] [i_3])))))))));
                arr_11 [i_2] = ((/* implicit */unsigned short) min((((/* implicit */long long int) min((((/* implicit */int) (_Bool)1)), ((-2147483647 - 1))))), (((((_Bool) (short)-5543)) ? (((/* implicit */long long int) ((/* implicit */int) ((-205908178) > (((/* implicit */int) arr_9 [i_2] [i_3] [(_Bool)1])))))) : (((((/* implicit */long long int) 917504)) / (-758966471419378057LL)))))));
                var_23 += ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_9 [i_2] [i_2] [i_2])), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */short) arr_8 [(unsigned char)1])), (arr_7 [i_2] [i_3]))))) : (max((((/* implicit */unsigned long long int) (signed char)5)), (0ULL))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 865143841)) ? (((int) (_Bool)1)) : (1872940283))))));
            }
        } 
    } 
    var_24 = ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_1))))) ? (((/* implicit */unsigned long long int) var_11)) : (((var_9) | (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) (short)(-32767 - 1))), (var_16))), (((/* implicit */long long int) (unsigned char)185)))))));
    var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) == (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) * (18446744073709551615ULL))))));
}
