/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 65887
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=65887 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/65887
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
    var_20 = ((/* implicit */unsigned short) max((((/* implicit */int) (_Bool)1)), (2103007075)));
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_3)))) ? (min((((/* implicit */long long int) var_1)), (-1LL))) : (((/* implicit */long long int) var_13))))) || (((/* implicit */_Bool) var_3))));
    var_22 = ((/* implicit */unsigned short) max((((var_2) | (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_15)) : (953356971)))))), (((/* implicit */unsigned long long int) var_8))));
    var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((72057594037927935ULL) + (var_2)))) ? (((var_11) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_16))) : (5361572021448834977ULL))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_16)) - (((/* implicit */int) var_12)))))))) ? (var_2) : (min((((((/* implicit */_Bool) var_14)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (12453067647008640949ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (_Bool)1)))))))));
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (int i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned int i_3 = 0; i_3 < 16; i_3 += 1) 
                    {
                        arr_11 [3ULL] [(unsigned short)4] [5LL] [(unsigned short)9] |= ((/* implicit */int) ((min((((/* implicit */long long int) ((((/* implicit */int) (unsigned short)10853)) % (((/* implicit */int) (unsigned short)21202))))), (max((arr_2 [7] [3U] [(_Bool)1]), (131071LL))))) & (((/* implicit */long long int) -320793539))));
                        var_24 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_3]))) : (max((11012352490280451756ULL), (((/* implicit */unsigned long long int) 2147483647))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)56303)))))) : (6432127928482766004LL)));
                        var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */unsigned int) (~(arr_1 [8ULL] [i_1 - 1])))) % ((-(max((((/* implicit */unsigned int) var_9)), (arr_0 [12]))))))))));
                        var_26 = ((/* implicit */unsigned short) (-(3672395324837020037ULL)));
                    }
                    for (short i_4 = 0; i_4 < 16; i_4 += 3) 
                    {
                        arr_14 [i_0] [i_4] [12] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 3687599164U))));
                        arr_15 [(unsigned char)3] [i_4] [12ULL] [(unsigned short)13] = ((/* implicit */int) max(((((~(5759897861286338370LL))) | (var_7))), (((/* implicit */long long int) arr_9 [i_0]))));
                        arr_16 [(unsigned char)10] [4] [i_4] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)9495))) / (var_6)));
                        arr_17 [14ULL] [i_4] [(_Bool)1] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)52171)) ? (((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (1078032887) : (((/* implicit */int) (_Bool)1))))) - ((-(4231755141U))))) : (((/* implicit */unsigned int) ((min((((/* implicit */int) var_12)), (arr_1 [1U] [i_4]))) >> (((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [9LL]))))))))));
                    }
                    var_27 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) arr_8 [i_1 + 2] [(_Bool)1] [13LL] [(unsigned short)15] [i_2])) : ((~(var_13)))));
                }
            } 
        } 
    } 
}
