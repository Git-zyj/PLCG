/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90342
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90342 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90342
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
    var_14 = ((/* implicit */unsigned char) max((((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (744232439))) * (((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_2)))))), (min((((/* implicit */int) ((((/* implicit */_Bool) var_6)) || (var_2)))), (((744232439) / (((/* implicit */int) (unsigned char)225))))))));
    var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_0))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) arr_0 [i_0])))) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        var_17 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_0]))) : (2778197388U)))) : (15913752027771837849ULL))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (+((+(var_3))))))));
            arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) ((signed char) 8812813858513827080LL))))))) | (((unsigned int) var_12))));
            arr_5 [i_1] [i_1] [6] = ((/* implicit */unsigned long long int) max((((int) max((((/* implicit */long long int) (unsigned short)742)), (-8812813858513827080LL)))), (((/* implicit */int) (((-(var_1))) < (var_1))))));
            /* LoopSeq 1 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                arr_8 [i_0] [i_2] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_9))))) ? (((var_7) / (((/* implicit */unsigned long long int) var_3)))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)37)))))))) ? (((((/* implicit */int) var_12)) >> (((arr_0 [i_0]) - (15927973083722384706ULL))))) : (((/* implicit */int) min((((/* implicit */short) (unsigned char)149)), (var_8))))));
                var_19 -= ((((/* implicit */int) (unsigned char)108)) | (((/* implicit */int) (unsigned char)224)));
                var_20 += ((/* implicit */unsigned short) ((max((0), (((/* implicit */int) ((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) var_3))))))) >> (((((/* implicit */int) var_4)) - (63)))));
                arr_9 [i_0] [i_1] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_2] [i_2] [(unsigned short)13])) ? (((((/* implicit */_Bool) arr_6 [i_0] [i_1] [i_2])) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 8589934591ULL)) ? (arr_6 [i_0] [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) : (max((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_10)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_9), (((/* implicit */signed char) var_12))))) | (((/* implicit */int) arr_3 [i_1] [i_2])))))));
            }
        }
    }
    for (short i_3 = 0; i_3 < 11; i_3 += 3) 
    {
        /* LoopNest 3 */
        for (signed char i_4 = 1; i_4 < 8; i_4 += 1) 
        {
            for (_Bool i_5 = 1; i_5 < 1; i_5 += 1) 
            {
                for (int i_6 = 1; i_6 < 9; i_6 += 1) 
                {
                    {
                        arr_22 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)62996))))) || (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) / (arr_0 [i_4 + 3]))))));
                        var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_15 [i_6 + 1] [i_5 - 1] [i_4 + 2])) + (((/* implicit */int) var_11))))) || (((/* implicit */_Bool) var_4))));
                        var_22 = ((/* implicit */unsigned char) max((var_22), (((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)107)) - (((/* implicit */int) (unsigned char)108)))))));
                        var_23 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)108)), (15913752027771837849ULL)));
                    }
                } 
            } 
        } 
        arr_23 [i_3] [i_3] &= ((/* implicit */unsigned short) 4077974249075178798ULL);
    }
    var_24 |= ((/* implicit */unsigned char) var_1);
}
