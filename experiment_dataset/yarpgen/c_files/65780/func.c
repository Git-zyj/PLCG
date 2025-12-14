/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65780
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
    var_12 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) ? ((((~(((/* implicit */int) (signed char)125)))) - (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-106)) : (((/* implicit */int) var_10)))))) : (var_0)));
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */signed char) max((((/* implicit */int) max((((/* implicit */signed char) var_3)), ((signed char)116)))), (((((/* implicit */int) ((((/* implicit */int) (signed char)-126)) > (((/* implicit */int) (signed char)118))))) % (((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) <= (((/* implicit */int) (unsigned short)5097)))))))));
        arr_4 [i_0] [0U] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) max(((unsigned short)2047), ((unsigned short)5097)))))) || (((/* implicit */_Bool) arr_0 [i_0] [i_0]))));
    }
    for (unsigned short i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((int) min(((signed char)114), ((signed char)-1))))) ? (((((/* implicit */_Bool) ((unsigned char) var_2))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) : (max((((/* implicit */unsigned long long int) var_6)), (arr_5 [i_1] [i_1]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_2))))))));
        var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((arr_5 [i_1] [i_1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))))) / (((((/* implicit */_Bool) (unsigned short)2055)) ? (arr_5 [i_1] [i_1]) : (arr_5 [i_1] [i_1]))))))));
        var_16 = ((/* implicit */int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1] [i_1]))) * (arr_5 [i_1] [i_1]))), (arr_5 [i_1] [(_Bool)1])));
        var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)5097)) || (((/* implicit */_Bool) (signed char)14))))), (arr_5 [(signed char)9] [i_1]))))));
        var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((((arr_5 [i_1] [i_1]) ^ (arr_5 [i_1] [i_1]))) != (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (unsigned char)55)) ? (1094160368396130123LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-117))))), (((/* implicit */long long int) arr_6 [i_1] [i_1]))))))))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 14; i_2 += 3) 
    {
        var_19 = ((/* implicit */short) var_9);
        arr_9 [i_2] = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) arr_7 [i_2] [i_2])))) ? (((/* implicit */unsigned long long int) 46489612U)) : (((unsigned long long int) var_5))));
        var_20 |= ((/* implicit */unsigned short) (signed char)-117);
        /* LoopSeq 1 */
        for (unsigned long long int i_3 = 1; i_3 < 13; i_3 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_4 = 0; i_4 < 14; i_4 += 4) 
            {
                arr_15 [i_2] [i_2] [i_3] [i_4] = ((int) arr_6 [i_3] [i_3 - 1]);
                var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) (unsigned short)2042))));
            }
            arr_16 [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) 1537000098));
            var_22 = ((/* implicit */unsigned int) min((var_22), (((/* implicit */unsigned int) var_2))));
            var_23 = ((/* implicit */unsigned short) (+(((/* implicit */int) arr_1 [i_3 + 1]))));
        }
    }
    var_24 = ((var_4) * (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_5), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_5))))))))));
}
