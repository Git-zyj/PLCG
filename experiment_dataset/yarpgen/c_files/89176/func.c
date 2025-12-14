/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89176
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
    /* LoopSeq 1 */
    for (unsigned int i_0 = 1; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0 - 1] = ((/* implicit */_Bool) min((((/* implicit */int) (!(((/* implicit */_Bool) 18446744073709551603ULL))))), (898541087)));
        arr_3 [i_0] = (-(((((/* implicit */_Bool) (+(4051077195U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)-25736)) ? (arr_1 [i_0]) : (((/* implicit */int) arr_0 [i_0]))))) : (((((/* implicit */_Bool) (unsigned short)9375)) ? (18446744073709551589ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))))))));
        var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) arr_0 [7U])), (2504873376856508747ULL))), (((/* implicit */unsigned long long int) (-(1952724182))))))) ? (((/* implicit */int) ((unsigned short) min((arr_0 [i_0]), (arr_0 [i_0]))))) : (arr_1 [(unsigned short)11])));
        var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_1 [i_0 - 1])))) ? (((/* implicit */int) ((min((((/* implicit */int) (signed char)123)), (arr_1 [i_0]))) < (min((arr_1 [i_0]), (((/* implicit */int) (signed char)-124))))))) : (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) -532870387)) ? (825221565U) : (2341244003U)))))));
        var_21 = ((/* implicit */signed char) (!(((((/* implicit */int) arr_0 [i_0 + 1])) <= (33554431)))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_1 = 0; i_1 < 18; i_1 += 2) 
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 18; i_2 += 2) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (unsigned long long int i_3 = 1; i_3 < 17; i_3 += 1) 
            {
                var_22 = ((/* implicit */int) arr_4 [i_3 - 1] [i_3 + 1]);
                var_23 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_8 [i_3 + 1])) * (((/* implicit */int) (unsigned char)226))));
            }
            arr_13 [i_1] = (unsigned short)25262;
            /* LoopNest 2 */
            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 4) 
            {
                for (signed char i_5 = 2; i_5 < 14; i_5 += 3) 
                {
                    {
                        var_24 = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) max((6273791838711023785ULL), (((/* implicit */unsigned long long int) 257413244U)))))))), (min((((/* implicit */int) min((((/* implicit */unsigned short) arr_9 [i_1])), ((unsigned short)25262)))), ((+(((/* implicit */int) arr_11 [i_1] [i_2] [i_5 - 1]))))))));
                        var_25 = ((/* implicit */short) min(((-((+(4294967295U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)14)))))));
                    }
                } 
            } 
        }
        var_26 = (+((+(3196250580U))));
    }
    for (signed char i_6 = 0; i_6 < 19; i_6 += 1) 
    {
        arr_21 [i_6] [i_6] = ((/* implicit */long long int) ((unsigned int) -991552172));
        /* LoopSeq 1 */
        for (unsigned short i_7 = 2; i_7 < 18; i_7 += 4) 
        {
            arr_24 [i_6] = ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (unsigned short)13072)));
            arr_25 [i_6] [i_6] = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) arr_23 [i_6] [7U] [i_7 - 2]))))));
        }
        var_27 = ((/* implicit */long long int) ((arr_19 [(signed char)2]) & (((/* implicit */unsigned int) (-(((((/* implicit */_Bool) (unsigned short)38895)) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (signed char)-127)))))))));
    }
    var_28 = ((/* implicit */unsigned long long int) var_6);
}
