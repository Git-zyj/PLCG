/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 85689
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=85689 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/85689
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 13; i_1 += 4) 
        {
            {
                var_18 -= min((max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_5 [i_1]))))), (arr_4 [i_1] [i_1] [i_0]))), (((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) (short)-9049)) ? (((/* implicit */int) (short)-3837)) : (((/* implicit */int) var_10)))))));
                var_19 = ((/* implicit */short) ((((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) max((var_0), (var_0)))) : (((/* implicit */int) (_Bool)1))))) & (arr_0 [i_0])));
                /* LoopNest 2 */
                for (unsigned char i_2 = 0; i_2 < 13; i_2 += 2) 
                {
                    for (unsigned int i_3 = 0; i_3 < 13; i_3 += 2) 
                    {
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) ((_Bool) var_12)))))))))));
                            arr_13 [i_0] [i_1] [i_1] [i_0] = ((_Bool) var_1);
                        }
                    } 
                } 
            }
        } 
    } 
    var_21 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_10)) & (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((134217727U) >> (((/* implicit */int) (_Bool)1))))) : (var_14))));
    var_22 = (((_Bool)1) ? (((((/* implicit */_Bool) ((unsigned char) var_17))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (_Bool)1)))) : ((+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned char)96)) : (((/* implicit */int) (_Bool)1)))))));
    /* LoopSeq 2 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        var_23 = ((/* implicit */_Bool) min((var_23), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)10429))))) ? (((/* implicit */int) ((short) (short)-17662))) : (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) ((-3061091374455666213LL) ^ (((/* implicit */long long int) ((/* implicit */int) (unsigned char)146)))))) ? (((unsigned long long int) var_3)) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 4160749562U)))))))))));
        arr_17 [i_4] [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4160749568U)) ? (((long long int) (~(((/* implicit */int) arr_16 [i_4]))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 9223372036854775788LL)) ? ((~(((/* implicit */int) (_Bool)0)))) : (((((/* implicit */int) (short)3027)) & (((/* implicit */int) arr_14 [i_4])))))))));
        arr_18 [i_4] [i_4] = ((/* implicit */unsigned char) ((min((((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-2)) : (((/* implicit */int) (unsigned char)255))))), (max((((/* implicit */long long int) (unsigned short)60261)), (var_14))))) < (((/* implicit */long long int) (((+(((/* implicit */int) (_Bool)1)))) % (((/* implicit */int) ((var_11) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))))));
    }
    /* vectorizable */
    for (unsigned long long int i_5 = 0; i_5 < 18; i_5 += 4) 
    {
        var_24 += ((/* implicit */_Bool) ((((/* implicit */int) arr_14 [i_5])) << (((((/* implicit */int) arr_14 [i_5])) - (15251)))));
        var_25 = ((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) (unsigned char)53)) : (((/* implicit */int) ((signed char) (unsigned short)5258)))));
    }
    var_26 += ((/* implicit */unsigned int) ((((/* implicit */int) ((short) min((var_11), (((/* implicit */unsigned int) var_5)))))) <= (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 7266410609112927607ULL)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_2))))))))));
}
