/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 79517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=79517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/79517
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {

                    for (int i_3 = 4; i_3 < 9;i_3 += 1)
                    {
                        var_11 = (5525 / (((!8822423809618085272) ? 1 : ((var_8 ? 67108863 : var_9)))));
                        arr_13 [i_2] [i_3] = ((((18446744073709551606 ? ((var_2 ? 67108863 : var_9)) : var_8))) ? 116 : (min((((var_8 ? 29009 : 8759223912343720486))), -var_1)));
                    }
                    arr_14 [i_0] = (((((18446744073709551606 ? 115 : 11506719272942799112))) ? ((var_2 ? var_6 : 36028797018963967)) : (127 >= 19661)));
                    var_12 = ((~((-27023 ? 872573308761108276 : 872573308761108276))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 10;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 9;i_5 += 1)
                        {
                            {
                                var_13 += (((((var_8 ? 0 : var_5))) ? ((var_5 ? var_4 : var_7)) : 9223372036854775807));
                                arr_20 [i_0] [i_0] [i_0] [i_4] [i_4] [i_0] [i_0] = -var_9;
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 10;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            {
                                var_14 = (min(-var_6, (((!(-32767 - 1))))));
                                arr_27 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (~var_9);
                            }
                        }
                    }
                }
            }
        }
    }
    var_15 = (((min((11707249727873908832 % 872573308761108276), (min(18446744073709551615, 562949953421311))))) ? var_7 : ((var_4 ? ((var_5 ? var_5 : 117)) : var_3)));
    var_16 = (((((8062930007911074600 ? 11707249727873908844 : 948035100148242870)) ? (((-9223372036854775784 ? 8759223912343720483 : -15785))) : (min(11411874370676989341, 128)))));
    #pragma endscop
}
