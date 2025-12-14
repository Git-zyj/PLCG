/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 88053
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=88053 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/88053
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
    var_14 = ((/* implicit */unsigned long long int) max((var_14), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28814)) ? (min((((/* implicit */unsigned long long int) (unsigned short)28814)), (0ULL))) : (((/* implicit */unsigned long long int) min((4072073220416428600LL), (((/* implicit */long long int) 826580985U)))))))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    var_15 = ((/* implicit */int) (!(((/* implicit */_Bool) 256468446))));
                    arr_8 [i_0] [i_1] [i_2] = ((/* implicit */short) 4039059002001347672LL);
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -611305826)) ? (1842434613) : (((/* implicit */int) (unsigned char)110))))) ? (((/* implicit */unsigned long long int) -1842434613)) : (max((((/* implicit */unsigned long long int) (unsigned short)53333)), (0ULL)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)22887)) ? (1842434612) : (((/* implicit */int) (unsigned short)12203))))), (((((/* implicit */_Bool) (unsigned char)62)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)157))) : (10980766081834344132ULL))))) : (((/* implicit */unsigned long long int) min((0U), (((/* implicit */unsigned int) max(((unsigned char)255), (((/* implicit */unsigned char) (signed char)58))))))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 4) 
                        {
                            {
                                arr_15 [i_4] [i_4] [i_0] [i_3] [i_0] [i_1] [i_0] = ((/* implicit */int) (~(max((3918256368U), (((/* implicit */unsigned int) -1842434613))))));
                                arr_16 [i_0] = ((/* implicit */unsigned long long int) (+(-491154867)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
