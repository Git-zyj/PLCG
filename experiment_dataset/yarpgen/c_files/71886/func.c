/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71886
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71886 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71886
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
    /* LoopSeq 3 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) -3226019268971042630LL))) ? (((/* implicit */int) ((signed char) var_11))) : (((/* implicit */int) var_6))))) < (5560372980471146802ULL)));
        var_16 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) var_9)) : (5560372980471146810ULL))), (((((/* implicit */_Bool) (signed char)-122)) ? (12886371093238404814ULL) : (((/* implicit */unsigned long long int) 2574474617U))))));
    }
    for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_5 [1U] [6] = ((/* implicit */signed char) max((((/* implicit */unsigned long long int) ((min((((/* implicit */long long int) arr_3 [12U])), (var_9))) / (((/* implicit */long long int) ((/* implicit */int) var_3)))))), (((((/* implicit */_Bool) max((2574474611U), (var_7)))) ? (18151563853787471661ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_1), (((/* implicit */short) var_6))))))))));
        var_17 = ((/* implicit */long long int) max((3425829538U), (((/* implicit */unsigned int) ((unsigned short) (unsigned short)27383)))));
        arr_6 [5] = ((/* implicit */unsigned short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [20U])) ? (var_7) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))) ? (var_13) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
        arr_7 [i_1] = ((/* implicit */signed char) 2129068975U);
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) arr_3 [i_1]);
    }
    /* vectorizable */
    for (unsigned short i_2 = 2; i_2 < 18; i_2 += 2) 
    {
        var_18 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) ((((/* implicit */int) arr_3 [i_2])) != (((/* implicit */int) var_10))))) : (((/* implicit */int) ((((/* implicit */int) arr_2 [i_2 - 1])) != (((/* implicit */int) arr_3 [9LL])))))));
        var_19 = ((/* implicit */signed char) ((((/* implicit */_Bool) 5560372980471146823ULL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */int) (signed char)-115)) : (((/* implicit */int) (unsigned short)27394))))) : (12886371093238404805ULL)));
        /* LoopSeq 2 */
        for (long long int i_3 = 0; i_3 < 20; i_3 += 2) /* same iter space */
        {
            arr_13 [(signed char)13] = ((/* implicit */unsigned char) ((3582395713U) - (((/* implicit */unsigned int) -152948126))));
            var_20 |= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_0 [18]))));
        }
        for (long long int i_4 = 0; i_4 < 20; i_4 += 2) /* same iter space */
        {
            arr_17 [i_2] [i_2] = ((/* implicit */short) arr_9 [i_4]);
            arr_18 [i_2] [i_2] = ((/* implicit */short) var_11);
        }
        var_21 = ((/* implicit */int) var_0);
        arr_19 [i_2] = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_1)) ? (arr_9 [(unsigned short)5]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-20))))) & (var_14)));
    }
    var_22 = ((/* implicit */long long int) var_2);
    /* LoopNest 2 */
    for (unsigned long long int i_5 = 1; i_5 < 9; i_5 += 2) 
    {
        for (long long int i_6 = 0; i_6 < 10; i_6 += 2) 
        {
            {
                var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) min((var_9), (((/* implicit */long long int) (-(max((arr_23 [i_5 - 1] [i_6]), (arr_4 [3LL])))))))))));
                var_24 = ((/* implicit */long long int) max((var_24), (((long long int) (+(var_13))))));
                var_25 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((short) arr_14 [i_5 - 1] [i_5 - 1] [i_5 - 1])))));
                arr_25 [i_6] [(signed char)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((_Bool) var_10)))) ? (((((/* implicit */_Bool) ((-7455371116318932406LL) / (((/* implicit */long long int) 3661196926U))))) ? (((((/* implicit */_Bool) arr_16 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */unsigned long long int) var_9)) : (arr_15 [6U] [6U]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(unsigned char)7])) ? (((/* implicit */long long int) var_11)) : (arr_14 [i_6] [i_5 - 1] [i_5])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-26110)))));
            }
        } 
    } 
}
