/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 84728
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=84728 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/84728
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
    var_18 = ((/* implicit */unsigned int) var_14);
    var_19 = ((((/* implicit */_Bool) (short)6502)) ? (((/* implicit */int) (short)-6510)) : (((/* implicit */int) (short)17036)));
    var_20 = ((/* implicit */short) min((((((var_16) == (((/* implicit */int) var_17)))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)17040))))) : (var_1))), (((/* implicit */unsigned long long int) var_13))));
    var_21 = ((/* implicit */signed char) (~(((/* implicit */int) var_12))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) (-(min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_0])), (14978531535665179545ULL))))))));
        /* LoopNest 2 */
        for (short i_1 = 1; i_1 < 22; i_1 += 4) 
        {
            for (signed char i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned short i_3 = 2; i_3 < 23; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] = ((/* implicit */short) ((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)24)), ((unsigned short)45920)))) ^ (((/* implicit */int) ((((((/* implicit */int) arr_5 [i_0] [i_0] [5])) << (((((/* implicit */int) arr_11 [20LL] [i_3] [i_4])) - (53241))))) > (((((/* implicit */_Bool) (unsigned short)59885)) ? (((/* implicit */int) arr_8 [i_0] [i_1])) : (((/* implicit */int) (signed char)31)))))))));
                                var_23 = ((/* implicit */unsigned long long int) (-(max((((/* implicit */int) var_13)), ((+(((/* implicit */int) (short)-17025))))))));
                                var_24 = ((/* implicit */signed char) (+(min((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_2 - 1])), (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-32767))) - (arr_1 [i_0])))))));
                                var_25 = ((/* implicit */unsigned char) arr_6 [i_1] [i_2] [11]);
                            }
                        } 
                    } 
                    arr_14 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (-(min((((/* implicit */long long int) (unsigned short)26160)), (9223372036854775804LL)))))) || (((/* implicit */_Bool) var_17))));
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 0; i_5 < 25; i_5 += 1) 
        {
            for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
            {
                {
                    arr_21 [i_5] [i_6] [5] [i_6] = ((/* implicit */short) ((((/* implicit */_Bool) 3571397334738588446LL)) ? (((/* implicit */int) ((((int) 3473020028U)) > (((/* implicit */int) (short)17048))))) : (((/* implicit */int) arr_4 [i_5] [i_0]))));
                    var_26 = ((/* implicit */short) min((((/* implicit */int) var_9)), (673102602)));
                    var_27 = ((/* implicit */_Bool) 11507136633636941573ULL);
                }
            } 
        } 
    }
}
