/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82186
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82186 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82186
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
    var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) min(((unsigned short)65408), ((unsigned short)38304)))), (min((((/* implicit */unsigned int) (unsigned short)46166)), (var_0)))))) ? (((/* implicit */long long int) ((((var_11) <= (((/* implicit */int) (unsigned short)46166)))) ? (((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_5)))) : (((/* implicit */int) (unsigned short)19356))))) : (min((((((/* implicit */_Bool) 0LL)) ? (19LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))), (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_6)) : (var_16)))))))))));
    var_19 = ((/* implicit */int) min((var_19), (((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (12434766261113572482ULL) : (((/* implicit */unsigned long long int) -856568983))))) ? (((/* implicit */int) min(((unsigned short)19356), (((/* implicit */unsigned short) (signed char)-61))))) : (((/* implicit */int) var_5))))) ? (min((((((/* implicit */_Bool) (unsigned short)46173)) ? (((/* implicit */int) (short)9241)) : (((/* implicit */int) (unsigned short)65514)))), (var_15))) : (((/* implicit */int) var_14))))));
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_14)) ? (var_16) : (var_7)));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 2; i_0 < 12; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 1) 
        {
            {
                var_21 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_2 [i_0])), (((unsigned short) arr_1 [i_1] [i_1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (((unsigned long long int) ((((/* implicit */_Bool) (signed char)-74)) && (((/* implicit */_Bool) (signed char)-62)))))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 13; i_2 += 3) 
                {
                    for (short i_3 = 0; i_3 < 13; i_3 += 1) 
                    {
                        {
                            var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min(((unsigned short)18), (var_5)))) ? (((arr_11 [i_0] [i_0] [i_2]) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)-29192)))) : (var_12)))) ? (max((((/* implicit */unsigned long long int) min((((/* implicit */signed char) (_Bool)0)), ((signed char)-73)))), (((((/* implicit */_Bool) (short)-29183)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (arr_1 [i_0] [i_1]))))) : (((/* implicit */unsigned long long int) 17LL))));
                            arr_12 [i_0] [(_Bool)1] [i_1] [i_2] [i_2] = ((/* implicit */int) var_5);
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_4 = 1; i_4 < 18; i_4 += 4) 
    {
        arr_17 [i_4] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 27021597764222976LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (short)29564))) - (arr_13 [i_4] [i_4 + 1])))) : (16ULL))) ^ (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned short)22)) ? (var_8) : (((/* implicit */int) (signed char)-34)))), (((((/* implicit */_Bool) 15521507626700093477ULL)) ? (((/* implicit */int) (signed char)-68)) : (((/* implicit */int) (signed char)-53)))))))));
        arr_18 [i_4] [i_4] = ((/* implicit */int) arr_13 [i_4] [i_4]);
        var_23 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) arr_15 [i_4]))) == (((/* implicit */int) (!(var_10))))));
    }
    for (long long int i_5 = 3; i_5 < 8; i_5 += 1) 
    {
        var_24 = ((/* implicit */unsigned long long int) max((max((((/* implicit */unsigned int) arr_6 [i_5 + 2] [i_5 + 4])), (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-69))) ^ (arr_4 [i_5]))))), (((/* implicit */unsigned int) max((arr_0 [i_5 - 2]), (((/* implicit */unsigned char) var_3)))))));
        var_25 = ((/* implicit */unsigned long long int) (((-(((/* implicit */int) arr_16 [i_5 - 3])))) + (((/* implicit */int) (signed char)121))));
    }
}
