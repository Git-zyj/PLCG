/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 76086
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=76086 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/76086
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (unsigned char i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned char i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    arr_8 [i_0] [i_0] [18] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) -432189218)), (min((((/* implicit */unsigned int) (-2147483647 - 1))), (3712792039U)))))), (min((8436751283801395667ULL), (((/* implicit */unsigned long long int) (unsigned short)7211))))));
                    arr_9 [(short)7] [i_0] [i_2] = ((/* implicit */int) min((min((min((((/* implicit */unsigned long long int) 2147483619)), (1850391211181263715ULL))), (min((36028795945222144ULL), (36028795945222144ULL))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)37059)), (-651166877)))), ((-9223372036854775807LL - 1LL)))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 23; i_4 += 4) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned int) max((var_13), (min((max((((/* implicit */unsigned int) -651166876)), (min((((/* implicit */unsigned int) -1849748483)), (4127617877U))))), (3221225472U)))));
                                var_14 *= ((/* implicit */unsigned short) (_Bool)0);
                                var_15 = ((/* implicit */unsigned int) min((min((min((((/* implicit */unsigned long long int) 651166880)), (18410715277764329456ULL))), (((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-1849748483)))))), (min((18410715277764329462ULL), (18410715277764329463ULL)))));
                            }
                        } 
                    } 
                }
                var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) 18410715277764329478ULL))));
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 24; i_5 += 4) 
                {
                    for (unsigned long long int i_6 = 2; i_6 < 23; i_6 += 4) 
                    {
                        for (unsigned char i_7 = 0; i_7 < 24; i_7 += 3) 
                        {
                            {
                                arr_25 [i_0] = ((/* implicit */unsigned int) min((651166893), (((/* implicit */int) (unsigned short)61419))));
                                arr_26 [i_0] [i_0] [i_0] [i_0] [i_0] = max((((/* implicit */unsigned long long int) min((65970697666560LL), (-7046779808694230198LL)))), (18410715277764329449ULL));
                                arr_27 [i_0] [22] [i_5] [i_5] [i_5] [i_5] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((-651166876), (((/* implicit */int) (_Bool)1))))), (max((((/* implicit */long long int) (_Bool)0)), (-9223372036854775792LL)))))), (16459299926664607817ULL)));
                                var_17 = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((((/* implicit */long long int) min((((/* implicit */int) (unsigned short)4104)), (-651166875)))), (min((((/* implicit */long long int) (_Bool)1)), (-8701966832241904988LL)))))), (max((((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)1)), (-651166873)))), (max((((/* implicit */unsigned long long int) -651166875)), (36028795945222155ULL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_18 = max((7707254327783592720ULL), (((/* implicit */unsigned long long int) 651166879)));
    var_19 *= ((/* implicit */unsigned long long int) (unsigned short)61419);
}
