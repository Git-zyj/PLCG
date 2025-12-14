/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88492
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88492 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88492
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
    var_17 = ((/* implicit */long long int) (short)-11980);
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_5 [i_0 + 1] [i_0] [i_1] = ((/* implicit */signed char) 8388607ULL);
                var_18 = ((/* implicit */_Bool) arr_3 [i_0 - 2] [i_0 - 1] [0ULL]);
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned long long int i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
                {
                    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073701163008ULL)) ? (18446744073701163008ULL) : (((((/* implicit */_Bool) 9321604299141835212ULL)) ? (arr_0 [(unsigned short)7]) : (18446744073701163009ULL)))));
                    arr_10 [0LL] = (-(-4192193004208556446LL));
                }
                for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
                {
                    var_20 ^= ((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((18446744073701163009ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-79))))))) != (((18446744073701163011ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))))))));
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) 8388601ULL)) ? (3246006457127872685ULL) : (15865300706743126637ULL)))))) ? ((-(((((/* implicit */_Bool) 1382241570250036022ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) : (8388607ULL))))) : (((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)31)))))))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_4 = 0; i_4 < 10; i_4 += 3) 
                    {
                        var_22 &= (~(((arr_2 [i_0 - 2]) * (((/* implicit */unsigned long long int) 9223372036854775807LL)))));
                        var_23 = (~(((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (11484044748907181375ULL) : (((/* implicit */unsigned long long int) 2259771621076961386LL)))));
                        var_24 ^= (-(((((/* implicit */_Bool) (signed char)68)) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0]))) + (var_7))) : (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)50))) ^ (var_1)))))));
                        arr_18 [i_4] [i_4] = ((/* implicit */long long int) (-((~(max((((/* implicit */unsigned long long int) arr_1 [i_0])), (6962699324802370238ULL)))))));
                    }
                    var_25 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) (-(arr_17 [i_0] [i_1] [i_1] [i_0 - 1])))) <= (((unsigned long long int) ((((/* implicit */_Bool) -2320903916018380414LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_3] [i_3] [i_3] [i_3]))) : (18446744073709551614ULL))))));
                    var_26 &= ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */int) (unsigned short)1)) > ((~(((/* implicit */int) (_Bool)0)))))));
                }
            }
        } 
    } 
    var_27 &= ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) 11484044748907181378ULL))) ? ((+(var_6))) : (((/* implicit */long long int) (+(((/* implicit */int) var_14)))))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (9059539292039357976ULL) : (((/* implicit */unsigned long long int) var_1))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-27102))) * (15411527557188655587ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5)))))));
}
