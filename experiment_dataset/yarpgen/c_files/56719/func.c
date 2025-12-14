/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56719
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56719 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56719
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
    var_20 &= ((/* implicit */signed char) (!(((/* implicit */_Bool) max((((/* implicit */int) ((unsigned char) var_15))), (((((/* implicit */_Bool) var_15)) ? (var_10) : (((/* implicit */int) var_18)))))))));
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 4; i_0 < 9; i_0 += 4) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((_Bool) min((((/* implicit */unsigned char) ((6565372949328805111ULL) != (6565372949328805105ULL)))), (arr_1 [i_0]))));
        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */int) var_11)) * (((/* implicit */int) arr_1 [i_0])))))))) / (((((/* implicit */_Bool) arr_1 [i_0 - 4])) ? (((/* implicit */int) arr_1 [i_0 - 2])) : (((/* implicit */int) arr_1 [i_0 - 4]))))));
        var_22 = ((/* implicit */unsigned long long int) var_0);
        /* LoopSeq 2 */
        for (unsigned long long int i_1 = 3; i_1 < 9; i_1 += 2) 
        {
            arr_5 [i_0 - 1] [i_0 - 1] [i_1] = ((/* implicit */short) (-(min((((/* implicit */unsigned long long int) arr_0 [i_0 - 4])), (arr_4 [i_0] [i_1 - 3] [i_0 - 3])))));
            var_23 = ((/* implicit */signed char) max((arr_4 [i_0] [i_1] [i_1]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1 - 2])))))));
            var_24 = ((/* implicit */_Bool) arr_1 [i_0 + 1]);
            var_25 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 + 1])) ? (((/* implicit */int) arr_0 [i_1 + 1])) : (((/* implicit */int) arr_0 [i_0 + 2]))))) ? (((/* implicit */int) ((unsigned char) arr_0 [i_0 + 1]))) : (((/* implicit */int) ((((/* implicit */int) arr_0 [i_0 - 1])) < (((/* implicit */int) arr_0 [i_1 + 2])))))));
        }
        for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 4) 
        {
            var_26 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) 13935965136704901465ULL)) ? (17368064925401509991ULL) : (17368064925401509983ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_6 [i_0] [i_0] [i_0])) % (((/* implicit */int) var_4))))) : (max((arr_7 [i_0] [i_0] [(unsigned char)10]), (((/* implicit */unsigned long long int) var_9)))))), (((((/* implicit */_Bool) (~(arr_7 [8LL] [8LL] [8LL])))) ? (((unsigned long long int) arr_4 [i_2] [i_2 + 2] [i_0])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_2 - 1] [9ULL]))))))))));
            var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_6 [i_0 + 1] [i_0 - 3] [i_2 + 2])) ? (1078679148308041618ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_6 [i_0 + 2] [i_0 + 1] [i_2 + 2])) ? (((/* implicit */int) (unsigned char)193)) : (((/* implicit */int) (unsigned short)32768)))))));
        }
    }
    for (unsigned long long int i_3 = 4; i_3 < 9; i_3 += 4) /* same iter space */
    {
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((int) (~(var_2))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_3 - 1])) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_8 [i_3 + 1]))))) ? (((((/* implicit */_Bool) var_10)) ? (arr_7 [i_3] [i_3 - 3] [i_3 - 3]) : (17368064925401509991ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_3 - 1]))))));
        var_29 = ((/* implicit */int) ((((((var_2) - (((/* implicit */unsigned long long int) var_17)))) * (((arr_9 [i_3]) << (((((/* implicit */int) arr_6 [7] [i_3 + 1] [i_3 + 1])) - (32221))))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_4 = 3; i_4 < 8; i_4 += 4) 
        {
            arr_13 [i_3] &= ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) arr_3 [i_3 + 2])) ? (arr_3 [i_3 + 2]) : (arr_3 [i_3 + 2]))));
            /* LoopSeq 2 */
            /* vectorizable */
            for (unsigned int i_5 = 0; i_5 < 11; i_5 += 4) 
            {
                var_30 = ((/* implicit */unsigned long long int) arr_15 [i_3] [i_3]);
                var_31 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_4 - 1] [i_4 - 3] [i_5]))));
            }
            /* vectorizable */
            for (unsigned short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_18 [i_3] [i_4 - 1] [i_4 - 1] [i_6] = ((/* implicit */short) ((((arr_12 [i_3] [i_3]) / (((/* implicit */int) arr_6 [i_3] [8] [i_6])))) < (((/* implicit */int) var_4))));
                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3289053161U)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (4294967295U)));
            }
            arr_19 [i_3 - 2] [i_3 - 2] = ((/* implicit */int) max((((((/* implicit */_Bool) arr_0 [i_4])) ? (min((var_15), (((/* implicit */unsigned long long int) arr_8 [i_4 + 2])))) : (((((/* implicit */_Bool) arr_9 [i_4 - 3])) ? (arr_9 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))))))), (min((max((arr_7 [i_3] [i_3] [i_3]), (((/* implicit */unsigned long long int) var_7)))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-13973)))))))));
        }
        var_33 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [(signed char)8] [i_3 + 2] [i_3 + 1]))) : ((~(arr_9 [(unsigned char)9]))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-13959)))));
    }
    /* vectorizable */
    for (unsigned long long int i_7 = 4; i_7 < 9; i_7 += 4) /* same iter space */
    {
        var_34 = (~((~(((/* implicit */int) (signed char)-124)))));
        var_35 = ((/* implicit */unsigned int) ((arr_12 [i_7 - 1] [i_7 - 3]) / (arr_12 [i_7 - 2] [i_7])));
    }
}
