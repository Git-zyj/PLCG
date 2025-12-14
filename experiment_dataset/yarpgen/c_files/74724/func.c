/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 74724
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=74724 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/74724
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
    var_14 = ((/* implicit */int) (unsigned char)40);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            {
                arr_6 [14LL] [i_0] [i_1] = ((/* implicit */unsigned int) arr_4 [i_0]);
                arr_7 [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                var_15 += ((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)216)), ((~(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)40))) ^ (223463717U)))))));
                /* LoopSeq 1 */
                for (int i_2 = 0; i_2 < 15; i_2 += 3) 
                {
                    arr_10 [i_1] [i_1] [i_1] = ((/* implicit */long long int) max((((/* implicit */unsigned int) min((arr_4 [i_0]), (arr_4 [i_2])))), ((-(((((/* implicit */_Bool) (unsigned char)9)) ? (var_10) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0])))))))));
                    var_16 = ((/* implicit */signed char) max((var_16), ((signed char)102)));
                    arr_11 [i_2] [i_1] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((int) (signed char)-43)), (((/* implicit */int) (!(((/* implicit */_Bool) arr_9 [i_1] [i_2])))))))) || (((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
                    arr_12 [(signed char)6] [(signed char)6] &= min((((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_12))))))), (max(((-(6ULL))), (((/* implicit */unsigned long long int) ((223463718U) * (4071503577U)))))));
                    arr_13 [i_2] = ((((/* implicit */_Bool) (+(((((/* implicit */_Bool) (unsigned char)175)) ? (4071503578U) : (1781610862U)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_2]), (arr_4 [i_0])))) ? (((((/* implicit */_Bool) -8515872912767289984LL)) ? (((/* implicit */int) var_12)) : (arr_2 [i_0]))) : (((/* implicit */int) ((_Bool) arr_4 [i_2])))))) : (((((/* implicit */_Bool) (+(2342860818U)))) ? (((/* implicit */unsigned long long int) min((710730123793680081LL), (((/* implicit */long long int) (unsigned char)215))))) : (min((3659875004787867033ULL), (((/* implicit */unsigned long long int) -6525442209901960876LL)))))));
                }
            }
        } 
    } 
    var_17 ^= ((/* implicit */signed char) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_5))));
    var_18 = ((/* implicit */signed char) (!((!(((/* implicit */_Bool) 223463703U))))));
    var_19 = ((/* implicit */signed char) (unsigned char)8);
}
