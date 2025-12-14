/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 69143
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=69143 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/69143
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
    var_14 = ((/* implicit */unsigned short) min((((/* implicit */unsigned int) min((min((var_1), (var_1))), (min((var_9), (((/* implicit */unsigned short) (short)27905))))))), (min((((/* implicit */unsigned int) min(((short)-27905), (((/* implicit */short) (unsigned char)63))))), (max((1028644780U), (((/* implicit */unsigned int) (unsigned short)13250))))))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 3) 
    {
        var_15 = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min(((unsigned short)1621), ((unsigned short)65519)))), (min((max((((/* implicit */unsigned long long int) 1346805052068215833LL)), (4858261551246454194ULL))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) var_13)), (var_6))))))));
        var_16 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (short)22918)), (2411543945U)))), (min((arr_1 [i_0]), (((/* implicit */long long int) (unsigned char)59))))))), (min((min((arr_0 [i_0]), (((/* implicit */unsigned long long int) var_12)))), (min((arr_0 [i_0]), (arr_0 [(unsigned char)12])))))));
    }
    /* LoopNest 3 */
    for (signed char i_1 = 4; i_1 < 17; i_1 += 2) 
    {
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
        {
            for (signed char i_3 = 0; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_4 = 1; i_4 < 14; i_4 += 3) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) min((arr_8 [i_4] [i_3]), ((unsigned char)203)))), (min(((unsigned short)11677), (((/* implicit */unsigned short) (unsigned char)138))))))), (min((min((arr_0 [i_2]), (1622061501212127675ULL))), (max((((/* implicit */unsigned long long int) (_Bool)1)), (arr_4 [i_4]))))))))));
                        arr_14 [i_4] [i_3] [i_4] [i_2] [i_1] = min((-383628221), (((/* implicit */int) (unsigned short)28504)));
                        arr_15 [i_4] [i_2] [i_1] [i_3] = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) min((max((((/* implicit */long long int) (_Bool)1)), (arr_1 [7ULL]))), (((/* implicit */long long int) min(((unsigned short)28504), (((/* implicit */unsigned short) var_2)))))))), (max((min((arr_4 [i_2]), (((/* implicit */unsigned long long int) var_3)))), (min((((/* implicit */unsigned long long int) var_12)), (11359323121306804484ULL)))))));
                    }
                    arr_16 [i_1] [i_2] [i_3] = ((/* implicit */signed char) min((max((max((((/* implicit */unsigned long long int) arr_2 [i_1])), (arr_0 [i_3]))), (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_11 [i_3] [i_3] [i_2] [i_2] [i_2] [i_1 - 4])), (19641742U)))))), (((/* implicit */unsigned long long int) min((min(((unsigned char)101), (var_0))), (min((arr_10 [i_3] [i_3] [i_3] [i_3] [i_1]), (((/* implicit */unsigned char) (_Bool)1)))))))));
                    arr_17 [i_1] [i_1] [i_3] = ((/* implicit */long long int) min((min((((/* implicit */unsigned int) (signed char)122)), (min((3145728U), (((/* implicit */unsigned int) (short)31082)))))), (((/* implicit */unsigned int) (short)-22918))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */_Bool) min((min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (signed char)31)), (var_3)))), (min((var_11), (((/* implicit */unsigned long long int) var_3)))))), (((/* implicit */unsigned long long int) min((min((((/* implicit */unsigned short) var_12)), (var_9))), (((/* implicit */unsigned short) min((((/* implicit */unsigned char) var_10)), ((unsigned char)173)))))))));
}
