/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 82785
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=82785 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/82785
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
    var_11 = ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) ((((/* implicit */unsigned int) var_9)) & (var_4)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) 0ULL))))) : ((+(((/* implicit */int) var_0))))))));
    var_12 = ((/* implicit */long long int) ((((/* implicit */_Bool) -1047577837)) ? ((~(((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) (unsigned char)18))));
    var_13 = ((/* implicit */long long int) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)17037))))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))))) : (5186445405124611899ULL))) == (21ULL)));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 18; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 18; i_2 += 3) 
                {
                    for (short i_3 = 1; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_8 [i_0] [i_0 - 1] [i_3] [i_0 + 2] [i_0] = ((/* implicit */unsigned int) ((long long int) ((((/* implicit */int) (short)-1)) / (-1047577841))));
                            var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) (+(min((((/* implicit */long long int) (!(((/* implicit */_Bool) (short)-17038))))), (((((/* implicit */long long int) ((/* implicit */int) (short)29649))) / (3077482453364563263LL))))))))));
                            arr_9 [i_0 + 1] [i_1] [i_3] [i_3] = ((/* implicit */_Bool) var_8);
                        }
                    } 
                } 
                /* LoopNest 3 */
                for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                {
                    for (long long int i_5 = 2; i_5 < 19; i_5 += 3) 
                    {
                        for (short i_6 = 0; i_6 < 20; i_6 += 2) 
                        {
                            {
                                var_15 = ((/* implicit */signed char) (+(((/* implicit */int) (unsigned short)24576))));
                                var_16 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((-534897827308010645LL) / (-4863945368050571042LL)))) ? (max((arr_3 [i_0 - 1]), (((/* implicit */unsigned int) ((short) var_7))))) : (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) | (((/* implicit */int) var_5)))))));
                                arr_19 [(_Bool)1] [i_1] [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)0)))))) == (((((/* implicit */_Bool) (+(var_9)))) ? ((~(var_8))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) var_3))))))))));
                            }
                        } 
                    } 
                } 
                arr_20 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) ^ (((var_6) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0]))))) : (((/* implicit */int) var_6))))));
                arr_21 [i_0] [i_0] [i_0 - 1] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)251)) == (-994679919)));
            }
        } 
    } 
}
