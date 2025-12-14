/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74296
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74296 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74296
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
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) (((((!(((/* implicit */_Bool) (signed char)4)))) ? (((/* implicit */int) (signed char)-13)) : (((/* implicit */int) var_1)))) <= (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)19)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)4))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned char) (!((!(((/* implicit */_Bool) max((var_9), (((/* implicit */int) arr_0 [i_0])))))))));
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */unsigned char) max((max((arr_7 [17ULL]), (arr_7 [i_1]))), (max((arr_7 [i_1]), (arr_7 [i_1])))));
        var_11 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_5 [i_1]) : (arr_5 [i_1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) (short)32757)))) : (((((/* implicit */_Bool) ((unsigned short) (short)-32752))) ? (max((arr_7 [i_1]), (((/* implicit */unsigned long long int) (unsigned short)65535)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 502023029U)) ? (((/* implicit */int) (signed char)14)) : (((/* implicit */int) (short)32762))))))));
        var_12 = ((/* implicit */signed char) arr_6 [i_1]);
    }
    var_13 = ((min((((/* implicit */unsigned long long int) var_3)), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (6453913857208268591ULL))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_5))))))));
    var_14 = ((/* implicit */long long int) (!((_Bool)1)));
    /* LoopNest 2 */
    for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
    {
        for (unsigned char i_3 = 0; i_3 < 19; i_3 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned short i_4 = 2; i_4 < 17; i_4 += 4) 
                {
                    var_15 = ((/* implicit */short) arr_4 [i_2]);
                    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) ((unsigned char) arr_12 [i_4 - 2] [i_4] [i_4 + 2])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
                    {
                        var_17 = (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 11054210204157140561ULL)) ? (((/* implicit */int) arr_14 [i_2] [i_2] [i_4] [i_5])) : (((/* implicit */int) arr_13 [i_2] [i_3]))))) ? (((/* implicit */int) arr_11 [i_3] [i_2])) : ((((_Bool)1) ? (((/* implicit */int) arr_10 [i_2] [14ULL])) : (((/* implicit */int) (short)-32743)))))));
                        /* LoopSeq 1 */
                        for (unsigned short i_6 = 0; i_6 < 19; i_6 += 3) 
                        {
                            var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) 2951188526469336074LL)) ? (3539197332616568300ULL) : (((/* implicit */unsigned long long int) (-((~(920806060))))))));
                            var_19 = ((/* implicit */short) ((int) (-(((((/* implicit */_Bool) arr_9 [(short)17])) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (short)-17437)))))));
                        }
                    }
                    arr_20 [i_2] [i_2] [i_2] = ((/* implicit */int) (!(((_Bool) ((unsigned long long int) 6900933680146469227LL)))));
                    var_20 = (~(max((((/* implicit */unsigned long long int) arr_19 [i_4 - 1] [i_4] [i_4] [i_4 - 2] [i_4 + 2] [i_4 + 1])), (18330582487859811496ULL))));
                }
                var_21 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */int) var_2)) < (((/* implicit */int) arr_14 [12] [i_3] [i_3] [i_3]))))) < (((((/* implicit */_Bool) arr_16 [i_3] [i_3])) ? (arr_4 [(unsigned short)12]) : (((/* implicit */int) (short)32762))))))), (arr_15 [i_2] [i_2] [(_Bool)1])));
                var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((var_7), (((/* implicit */int) arr_14 [i_2] [i_2] [i_2] [i_3]))))) ? (((/* implicit */int) var_3)) : ((~(((/* implicit */int) arr_13 [i_2] [i_3])))))))));
            }
        } 
    } 
}
