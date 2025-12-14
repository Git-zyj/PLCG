/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 71880
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=71880 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/71880
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
    var_18 = min(((unsigned short)0), (min((var_12), (max(((unsigned short)0), ((unsigned short)53461))))));
    var_19 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)36578)))))));
    var_20 = ((signed char) var_4);
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 21; i_2 += 4) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        for (short i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                arr_13 [i_4] = ((/* implicit */unsigned short) max((((((/* implicit */_Bool) min(((unsigned short)34767), (var_0)))) ? (((/* implicit */int) max(((unsigned short)8191), ((unsigned short)36583)))) : ((-(((/* implicit */int) (unsigned short)36581)))))), ((+(((((/* implicit */_Bool) (unsigned short)28935)) ? (((/* implicit */int) var_14)) : (((/* implicit */int) (signed char)-1))))))));
                                arr_14 [i_2] [i_1 + 1] |= (unsigned short)60213;
                                var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)6)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) var_16))))) ? (((/* implicit */int) min(((unsigned short)28948), (((/* implicit */unsigned short) var_5))))) : (((/* implicit */int) (short)139)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36588)))))));
                                var_22 *= ((/* implicit */unsigned short) (signed char)127);
                                arr_15 [(signed char)10] [(unsigned short)4] [i_4] [(unsigned short)1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned short)36585)) ? (((/* implicit */int) min(((unsigned short)65535), ((unsigned short)33886)))) : (((((/* implicit */int) (unsigned short)65531)) << (((/* implicit */int) (signed char)7))))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)57841))))) ? (((/* implicit */int) (unsigned short)65529)) : (((((((/* implicit */int) var_4)) | (((/* implicit */int) (unsigned short)255)))) | (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)0)))))))));
                    var_24 = ((/* implicit */short) ((unsigned short) (-(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)36587))))))));
                    var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)65535))))) ? (((((/* implicit */_Bool) max(((unsigned short)36588), ((unsigned short)60214)))) ? (((/* implicit */int) (unsigned short)28925)) : (((/* implicit */int) min(((unsigned short)12878), (((/* implicit */unsigned short) (short)16146))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)26711))))) ? (((/* implicit */int) max(((unsigned short)28963), ((unsigned short)17668)))) : (((/* implicit */int) min((((/* implicit */short) var_8)), ((short)-6))))))));
                    /* LoopNest 2 */
                    for (unsigned short i_5 = 1; i_5 < 18; i_5 += 1) 
                    {
                        for (unsigned short i_6 = 2; i_6 < 19; i_6 += 2) 
                        {
                            {
                                arr_20 [i_0] [i_5] [i_1] [i_2] [(signed char)14] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)28952)) ? (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)19788))))) ? (((/* implicit */int) (short)13543)) : ((+(((/* implicit */int) (unsigned short)5322)))))) : (((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned short)5322)) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)28952)))))))));
                                arr_21 [i_1] [i_0] [i_1] [i_2] [i_5 + 3] [i_5 + 3] [i_6] |= ((/* implicit */short) max((((/* implicit */int) (short)-20113)), ((+(((/* implicit */int) (!(((/* implicit */_Bool) (short)20125)))))))));
                                arr_22 [i_5] [i_1] [i_2] [i_5] [i_6] [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) (unsigned short)28957))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
