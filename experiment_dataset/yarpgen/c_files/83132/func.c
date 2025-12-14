/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 83132
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=83132 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/83132
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
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 15; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (long long int i_4 = 2; i_4 < 14; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_2 + 1] [i_3])) ? (((/* implicit */long long int) ((((/* implicit */int) ((signed char) 5592554728033704780LL))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_2 [6LL] [i_4 - 1])) == (17989101103714429009ULL))))))) : (((long long int) arr_8 [i_4 + 1] [i_3] [i_2 - 1] [i_2] [i_2 - 1] [i_2 + 1]))));
                                var_13 = ((5205205763757073802ULL) & (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_2 - 1] [i_4 - 2] [i_2 + 1])) ? (arr_7 [i_2 + 1] [i_4 - 1] [i_2]) : (arr_7 [i_2 - 1] [i_4 + 1] [i_2 + 1])))));
                            }
                        } 
                    } 
                    var_14 += ((((/* implicit */_Bool) ((arr_8 [i_0] [i_1] [i_2 - 1] [i_0] [i_0] [i_0]) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_8 [i_1] [i_0] [i_2 - 1] [i_0] [(_Bool)1] [i_2])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((!(((/* implicit */_Bool) (signed char)70)))), ((!(((/* implicit */_Bool) -3912326742858397834LL)))))))) : (max((((unsigned long long int) 2724705479977320648ULL)), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_0] [i_1])) && (((/* implicit */_Bool) arr_0 [i_1]))))))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        for (signed char i_6 = 2; i_6 < 14; i_6 += 4) 
                        {
                            {
                                arr_19 [i_6 + 2] [i_1] [i_5] = (+(((((((/* implicit */long long int) ((/* implicit */int) (signed char)53))) / (3912326742858397830LL))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))));
                                var_15 *= ((/* implicit */unsigned long long int) ((arr_13 [i_0] [i_0] [i_1] [i_2 - 1]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-71))))))));
                                arr_20 [i_0] [i_5] [i_2] [i_2] [i_5] [i_6] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_4)) ? (7010864203359177569ULL) : (18446744073709551595ULL))) : (((18446744073709551595ULL) | (((/* implicit */unsigned long long int) 3912326742858397826LL)))))), (((arr_0 [i_0]) * (min((((/* implicit */unsigned long long int) var_2)), (var_1)))))));
                                var_16 -= ((/* implicit */signed char) var_6);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (long long int i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        for (unsigned long long int i_8 = 0; i_8 < 23; i_8 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned long long int i_9 = 3; i_9 < 21; i_9 += 4) 
                {
                    for (signed char i_10 = 0; i_10 < 23; i_10 += 1) 
                    {
                        {
                            var_17 -= ((/* implicit */unsigned long long int) ((13241538309952477806ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2773786031423007432LL))))))));
                            var_18 *= ((/* implicit */_Bool) min((((((((/* implicit */_Bool) arr_21 [i_7])) && (((/* implicit */_Bool) arr_22 [i_7] [i_9 + 2])))) ? (((/* implicit */unsigned long long int) max((-4304972163677203508LL), (((/* implicit */long long int) arr_27 [i_8] [i_8] [(signed char)14] [i_8]))))) : (((((/* implicit */_Bool) 2608789906693483174ULL)) ? (arr_22 [i_10] [i_7]) : (((/* implicit */unsigned long long int) var_7)))))), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) 21ULL)))))))));
                        }
                    } 
                } 
                var_19 -= arr_25 [i_7] [10ULL] [(_Bool)1];
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_11 = 0; i_11 < 24; i_11 += 1) 
    {
        for (long long int i_12 = 0; i_12 < 24; i_12 += 4) 
        {
            {
                arr_37 [i_11] = ((/* implicit */signed char) (+(arr_36 [i_11] [i_12])));
                arr_38 [i_11] [i_12] = ((unsigned long long int) 13665451598804571682ULL);
                arr_39 [i_12] = min((((/* implicit */unsigned long long int) var_2)), (((((/* implicit */_Bool) (~(3371753893429274180LL)))) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) (_Bool)1))))) : (min((((/* implicit */unsigned long long int) 9223372036854775807LL)), (18446744073709551605ULL))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) 15722038593732230982ULL)) ? (((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -9223372036854775791LL)) || (((/* implicit */_Bool) var_10))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_4)))))))) : (((((/* implicit */_Bool) var_11)) ? (var_1) : (((((/* implicit */_Bool) -3912326742858397850LL)) ? (13703655042455186521ULL) : (((/* implicit */unsigned long long int) 3912326742858397817LL))))))));
    var_21 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) min((var_4), (var_1)))) || ((!(((/* implicit */_Bool) var_10)))))) ? (-1101911544628950399LL) : (var_11)));
}
