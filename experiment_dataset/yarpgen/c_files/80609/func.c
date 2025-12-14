/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 80609
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=80609 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/80609
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (short i_2 = 4; i_2 < 17; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 19; i_4 += 3) 
                        {
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) max((((((((/* implicit */int) arr_11 [i_4] [i_3] [i_0] [i_3] [i_0] [i_0] [i_0])) > (((/* implicit */int) arr_5 [i_0] [(unsigned short)10] [i_0])))) ? (((/* implicit */int) arr_11 [i_4] [i_2 - 2] [i_2] [i_2 - 2] [i_2 - 2] [i_2 - 2] [i_2 - 2])) : (175669981))), (((/* implicit */int) ((_Bool) arr_7 [i_0] [(short)0] [i_4] [i_1] [i_4])))));
                                arr_13 [i_1] [i_1] [i_1] [i_2] [i_3] [i_1] [i_4] = ((/* implicit */_Bool) max((min(((+(((/* implicit */int) arr_3 [i_1] [i_1])))), ((((_Bool)1) ? (-175670003) : (((/* implicit */int) (unsigned char)34)))))), (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) arr_4 [i_4])) ? (((/* implicit */int) (unsigned short)33397)) : (((/* implicit */int) (signed char)105))))))));
                                arr_14 [i_0] [i_1] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) max((((int) (+(((/* implicit */int) var_6))))), ((-(0)))));
                                var_11 = ((/* implicit */long long int) ((int) arr_8 [i_1]));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] [i_0] = (~(((/* implicit */int) arr_1 [i_4])));
                            }
                        } 
                    } 
                    arr_16 [i_0] [i_1] [8ULL] [i_2 - 4] = ((/* implicit */unsigned long long int) (~(((unsigned int) ((((/* implicit */int) (unsigned short)58600)) < (((/* implicit */int) (unsigned char)61)))))));
                    var_12 = ((/* implicit */unsigned short) min((((((/* implicit */_Bool) arr_8 [i_1])) ? (((/* implicit */int) arr_8 [i_1])) : (((/* implicit */int) arr_4 [i_2 - 3])))), (((/* implicit */int) (signed char)-36))));
                    arr_17 [i_0] [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) min((arr_3 [i_0] [i_1]), (min((((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned char)1)) && (((/* implicit */_Bool) var_2))))), (min((((/* implicit */unsigned short) (_Bool)0)), (arr_4 [i_0])))))));
                    arr_18 [i_1] [i_1] [i_2] = (((~(((/* implicit */int) ((signed char) (unsigned short)33386))))) > (((/* implicit */int) ((((/* implicit */int) (unsigned short)55833)) < (min((-1185437293), (175669966)))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (unsigned short)61440)), (min((((/* implicit */unsigned long long int) ((unsigned char) (unsigned char)244))), (var_1)))));
}
