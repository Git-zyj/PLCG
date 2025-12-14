/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 78360
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=78360 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/78360
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
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 4) /* same iter space */
    {
        var_11 = ((/* implicit */int) var_6);
        var_12 = ((/* implicit */unsigned char) arr_0 [i_0]);
    }
    for (unsigned long long int i_1 = 1; i_1 < 11; i_1 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_2 = 0; i_2 < 12; i_2 += 4) 
        {
            /* LoopSeq 1 */
            for (unsigned int i_3 = 3; i_3 < 10; i_3 += 2) 
            {
                var_13 = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)22)) ? (((/* implicit */int) var_9)) : (((((/* implicit */int) var_4)) | (((((/* implicit */int) var_3)) - (((/* implicit */int) var_4))))))));
                var_14 = ((/* implicit */unsigned char) max((((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) (unsigned short)6)))) >= (min((var_10), (((/* implicit */unsigned int) (unsigned short)65529)))))), (((((/* implicit */long long int) arr_1 [i_1 + 1])) == (min((((/* implicit */long long int) var_8)), (arr_3 [(unsigned char)6] [i_2])))))));
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */unsigned int) ((/* implicit */int) var_3))) - (1182433193U))) * (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) 32736))))))))) ? (((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) - (3171766623978977296ULL)))) : (((/* implicit */unsigned long long int) max(((~(((/* implicit */int) var_4)))), (arr_0 [i_1 + 1]))))));
                var_16 &= ((/* implicit */int) arr_7 [i_2] [i_2]);
                arr_8 [i_3] [i_3] = ((short) ((int) (+(((/* implicit */int) (unsigned short)2782)))));
            }
            var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((long long int) arr_2 [(signed char)11]))) ? (arr_2 [(signed char)7]) : (((((/* implicit */_Bool) var_3)) ? (arr_2 [i_2]) : (arr_2 [i_2])))));
        }
        arr_9 [i_1 - 1] [i_1] = ((/* implicit */short) ((int) min((((/* implicit */unsigned int) var_6)), ((~(var_10))))));
    }
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 17; i_4 += 3) 
    {
        for (unsigned short i_5 = 3; i_5 < 14; i_5 += 3) 
        {
            {
                var_18 = ((/* implicit */unsigned short) ((unsigned char) var_4));
                var_19 |= ((((/* implicit */_Bool) ((((((/* implicit */int) min((((/* implicit */short) (unsigned char)124)), (arr_14 [i_4] [(signed char)4])))) + (2147483647))) >> (((((((/* implicit */_Bool) var_6)) ? (arr_10 [i_4]) : (((/* implicit */int) (unsigned short)62742)))) + (425370720)))))) || (((/* implicit */_Bool) ((((arr_10 [i_4]) != (((/* implicit */int) var_4)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6))) : (11059906695358630016ULL)))));
                var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_2))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)206)) : (((/* implicit */int) var_8)))))) : ((+(((/* implicit */int) (unsigned short)18385))))));
                arr_15 [i_4] [i_5] [i_5] = ((/* implicit */unsigned long long int) var_5);
            }
        } 
    } 
}
