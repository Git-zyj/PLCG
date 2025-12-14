/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89694
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89694 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89694
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
    var_10 = ((/* implicit */long long int) max((var_10), (((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 14ULL)) ? (18446744073709551599ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_4))))))))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        var_11 = ((/* implicit */unsigned short) max((var_11), (((/* implicit */unsigned short) (-((~(((/* implicit */int) arr_1 [i_0])))))))));
        var_12 = max((((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) | (((/* implicit */int) arr_0 [i_0]))))) ? (var_0) : (((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : (var_3))))), (((((((/* implicit */_Bool) 4740129974134573014ULL)) && (((/* implicit */_Bool) 16ULL)))) ? (22ULL) : (2ULL))));
        /* LoopSeq 3 */
        for (unsigned short i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            var_13 += ((/* implicit */unsigned short) (_Bool)1);
            arr_4 [i_0] [(unsigned short)23] [i_1] = min((((/* implicit */unsigned long long int) 1977674534734443369LL)), (((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-100))))) ? (min((18446744073709551609ULL), (10344104899970973432ULL))) : (min((var_0), (((/* implicit */unsigned long long int) -3077011864529022032LL)))))));
            arr_5 [i_0] [i_1] = ((_Bool) ((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_1]))) : (10344104899970973404ULL)));
            var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(20ULL)))) ? (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_0])))) : ((~(((/* implicit */int) var_9))))));
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */int) ((unsigned short) (unsigned short)11200))), ((+(((/* implicit */int) (unsigned short)17272))))))) ? ((+(18446744073709551591ULL))) : (((((/* implicit */_Bool) (+(var_8)))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
        }
        for (unsigned short i_2 = 0; i_2 < 24; i_2 += 3) 
        {
            arr_8 [i_0] [(_Bool)1] [i_2] = ((/* implicit */unsigned long long int) var_7);
            /* LoopNest 2 */
            for (signed char i_3 = 0; i_3 < 24; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                {
                    {
                        var_16 = ((/* implicit */signed char) min((var_16), (((/* implicit */signed char) max((((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_9))))) <= ((-(1ULL)))))), (min((((/* implicit */long long int) (unsigned short)65535)), (arr_11 [i_2]))))))));
                        arr_14 [(signed char)6] [i_2] [i_2] [i_0] [i_2] = ((/* implicit */long long int) ((((/* implicit */int) var_9)) * ((-(((/* implicit */int) (unsigned short)431))))));
                        arr_15 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */_Bool) 11561543107200398668ULL);
                    }
                } 
            } 
            var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) var_9))));
        }
        for (unsigned long long int i_5 = 1; i_5 < 21; i_5 += 3) 
        {
            var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) min(((+(((18446744073709551613ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))), ((-(max((((/* implicit */unsigned long long int) var_4)), (var_0))))))))));
            var_19 = ((/* implicit */signed char) ((((375042273214786618LL) != (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))))))) ? (((((/* implicit */_Bool) (unsigned short)37313)) ? (var_0) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_5])) ? (((/* implicit */int) arr_6 [i_0] [i_5])) : (((/* implicit */int) var_7))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))));
            arr_19 [i_0] [i_0] [i_5 + 1] = ((/* implicit */signed char) var_6);
        }
        arr_20 [i_0] = ((/* implicit */long long int) ((unsigned short) -23LL));
    }
}
