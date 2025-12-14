/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 60526
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=60526 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/60526
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
    var_13 = ((/* implicit */int) max((var_13), (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_0))) <= (((((unsigned int) (unsigned short)30796)) % (((/* implicit */unsigned int) (+(((/* implicit */int) var_6))))))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) max((var_14), (((/* implicit */signed char) ((6181669639021647449LL) >= (((/* implicit */long long int) ((/* implicit */int) (unsigned char)6))))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 3; i_1 < 14; i_1 += 4) 
        {
            arr_7 [i_0] [i_1 - 3] [i_0] = ((/* implicit */unsigned char) max((var_1), (((/* implicit */unsigned short) ((((/* implicit */int) var_6)) <= (((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1)))))))));
            var_15 *= ((/* implicit */signed char) (~(((((/* implicit */_Bool) max(((unsigned char)150), ((unsigned char)10)))) ? (((/* implicit */int) (unsigned short)10421)) : (min((-1), (((/* implicit */int) (unsigned short)16486))))))));
        }
        /* LoopNest 3 */
        for (short i_2 = 1; i_2 < 14; i_2 += 3) 
        {
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 4) 
            {
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    {
                        arr_14 [i_3] [i_2 - 1] [i_2] [i_4] = ((/* implicit */unsigned short) (-(min((((4294967295U) ^ (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)0)))))))));
                        arr_15 [i_3] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) 14778133860989317295ULL)) ? (((/* implicit */int) (unsigned short)10428)) : (((/* implicit */int) (unsigned char)245)))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) (unsigned short)19)))))) * (((/* implicit */int) ((((((/* implicit */_Bool) (short)-32755)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65512))) : (arr_0 [14ULL]))) >= (((/* implicit */long long int) (+(((/* implicit */int) arr_11 [i_3] [i_3] [i_3]))))))))));
                    }
                } 
            } 
        } 
        var_16 -= ((/* implicit */unsigned int) ((arr_2 [(signed char)7]) >= (((/* implicit */long long int) ((((var_8) << (((arr_12 [i_0] [i_0] [i_0] [i_0]) - (1509823815U))))) - (((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))))))));
    }
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 0; i_5 < 11; i_5 += 2) 
    {
        for (long long int i_6 = 1; i_6 < 9; i_6 += 4) 
        {
            {
                /* LoopSeq 2 */
                for (signed char i_7 = 3; i_7 < 8; i_7 += 2) /* same iter space */
                {
                    var_17 = ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (unsigned short)62278)), (max((6181669639021647428LL), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-38))) >= (var_9))))))));
                    arr_24 [i_7] = ((/* implicit */signed char) (~(((/* implicit */int) (short)62))));
                    var_18 = ((/* implicit */_Bool) min((var_18), (((/* implicit */_Bool) ((signed char) ((short) (unsigned char)255))))));
                }
                /* vectorizable */
                for (signed char i_8 = 3; i_8 < 8; i_8 += 2) /* same iter space */
                {
                    arr_27 [i_8] [i_8] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) arr_25 [i_6 - 1]))) < (4611686018427322368LL)));
                    arr_28 [i_5] [i_6 - 1] [i_8] [i_6] = ((/* implicit */unsigned short) var_11);
                }
                var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) var_11))));
                var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))))));
                var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) max(((-(13ULL))), (((/* implicit */unsigned long long int) ((1902782392U) >> (((((/* implicit */int) max(((unsigned short)37500), (((/* implicit */unsigned short) (unsigned char)245))))) - (37475)))))))))));
            }
        } 
    } 
    var_22 &= ((/* implicit */short) var_7);
}
