/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 95784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=95784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/95784
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
    var_12 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        for (signed char i_4 = 0; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_13 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 17837690521555675015ULL)) ? (((/* implicit */int) arr_0 [i_2])) : (((/* implicit */int) arr_0 [i_0]))));
                                arr_13 [i_2] [i_3] [i_2] [i_1] [i_2] = ((/* implicit */_Bool) (+(5246715362452577084LL)));
                                var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_8))))) ? (((unsigned long long int) arr_3 [i_1] [i_1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 4294967293U)) >= (var_6)))))));
                                var_15 = ((/* implicit */unsigned char) max((var_15), (((unsigned char) var_0))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned char i_5 = 0; i_5 < 11; i_5 += 4) 
                    {
                        for (unsigned short i_6 = 0; i_6 < 11; i_6 += 4) 
                        {
                            {
                                arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) var_0);
                                var_16 = ((/* implicit */_Bool) ((var_4) * (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_18 [i_2] [i_2] [i_2] [i_5] [i_5])))))));
                                arr_20 [i_0] [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (+(arr_5 [i_0] [i_0] [i_0] [i_0])));
                                var_17 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)112))) ^ (4433230883192832ULL)));
                                var_18 = ((/* implicit */unsigned char) ((long long int) arr_11 [i_0] [i_1] [i_2] [i_5] [i_6]));
                            }
                        } 
                    } 
                }
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 3) /* same iter space */
                {
                    var_19 *= ((/* implicit */unsigned int) arr_14 [i_7] [i_0] [i_0] [8ULL]);
                    var_20 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (+((+(4294967289U)))))), (max((var_4), (((/* implicit */unsigned long long int) arr_6 [i_1] [i_1] [i_1] [i_1]))))));
                    var_21 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((long long int) var_8)))));
                    arr_25 [i_7] [i_0] [i_0] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_17 [i_0] [i_0] [i_7] [i_7]))) ? (((/* implicit */int) ((((unsigned long long int) var_1)) < (((var_11) ? (5688035821333341947ULL) : (((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0]))))))) : (((((/* implicit */int) arr_24 [i_0] [i_0] [i_1] [i_7])) << (((((/* implicit */int) arr_24 [i_0] [i_0] [i_7] [i_7])) - (61874)))))));
                }
                for (unsigned short i_8 = 0; i_8 < 11; i_8 += 3) /* same iter space */
                {
                    var_22 += ((/* implicit */_Bool) (+(((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])) % (((((/* implicit */_Bool) arr_2 [i_1] [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (var_4)))))));
                    var_23 *= ((/* implicit */signed char) (((~(((/* implicit */int) (unsigned char)121)))) | (((/* implicit */int) min((arr_7 [i_0] [i_1] [i_8] [i_0]), (arr_7 [i_1] [i_1] [i_1] [i_1]))))));
                }
                arr_29 [i_1] [i_1] [i_0] = ((/* implicit */short) (signed char)-112);
            }
        } 
    } 
}
