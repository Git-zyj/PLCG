/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 59137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=59137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/59137
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
    var_15 = ((/* implicit */unsigned long long int) var_3);
    var_16 |= ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)85))));
    var_17 = ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))) != (17996806323437568ULL));
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) var_2))));
    /* LoopSeq 2 */
    for (signed char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        var_19 -= ((/* implicit */unsigned short) 3096418963318403503ULL);
        /* LoopSeq 1 */
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) min(((-(arr_4 [i_1] [i_0 - 1]))), ((~(((/* implicit */int) (signed char)85)))))))));
            /* LoopSeq 3 */
            for (unsigned char i_2 = 1; i_2 < 13; i_2 += 3) 
            {
                arr_8 [i_0] [i_0] [i_0] = ((/* implicit */signed char) 1934927347);
                arr_9 [i_0] [i_2] = ((/* implicit */_Bool) var_4);
            }
            for (unsigned short i_3 = 1; i_3 < 15; i_3 += 3) /* same iter space */
            {
                arr_14 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((min((3096418963318403494ULL), (((/* implicit */unsigned long long int) (signed char)85)))), (((((/* implicit */unsigned long long int) -1329983003)) | (9006099743113216ULL))))))));
                var_21 *= ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)73)), (min((-893655387), (((/* implicit */int) (unsigned short)4032))))));
            }
            for (unsigned short i_4 = 1; i_4 < 15; i_4 += 3) /* same iter space */
            {
                var_22 ^= ((/* implicit */short) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_4 [i_0 + 2] [i_4 + 1])), ((-(arr_12 [(signed char)6] [(signed char)6] [i_4] [i_4]))))))));
                arr_17 [(_Bool)1] [i_0] [i_0 + 1] [i_0 + 1] &= ((/* implicit */unsigned long long int) var_12);
                arr_18 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */_Bool) max((((/* implicit */int) max((((((/* implicit */_Bool) var_10)) && (((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])))), ((_Bool)1)))), (((((/* implicit */_Bool) max((var_13), (((/* implicit */unsigned short) (signed char)19))))) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (!(((/* implicit */_Bool) 15808925693193461209ULL)))))))));
            }
        }
        arr_19 [i_0] = ((/* implicit */unsigned long long int) (unsigned short)65516);
    }
    for (unsigned long long int i_5 = 1; i_5 < 22; i_5 += 3) 
    {
        arr_23 [i_5] = ((/* implicit */_Bool) var_7);
        var_23 = ((/* implicit */unsigned int) min((var_23), (((/* implicit */unsigned int) max(((~(4798458314603241490ULL))), (((/* implicit */unsigned long long int) max((5865299242078167688LL), (((/* implicit */long long int) var_7))))))))));
    }
}
