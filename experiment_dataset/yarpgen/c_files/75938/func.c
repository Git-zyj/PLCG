/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 75938
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=75938 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/75938
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
    var_18 = ((/* implicit */unsigned short) ((unsigned int) var_2));
    var_19 = ((/* implicit */unsigned short) var_17);
    var_20 -= ((/* implicit */short) (!(((/* implicit */_Bool) min((min((((/* implicit */int) var_9)), (var_1))), (var_1))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12; i_0 += 4) 
    {
        for (unsigned int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            for (signed char i_2 = 0; i_2 < 13; i_2 += 1) 
            {
                {
                    arr_10 [(signed char)1] [i_1 + 1] [i_1] [(signed char)1] = ((/* implicit */long long int) var_0);
                    var_21 = ((/* implicit */signed char) -1LL);
                    /* LoopSeq 1 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 3008391994U)), (var_10)))) ? (((/* implicit */int) arr_5 [i_0 - 1] [i_1 + 1] [6ULL])) : (((/* implicit */int) ((unsigned short) var_3)))))) ? (min((((unsigned long long int) (_Bool)1)), (max((16479850278636301395ULL), (((/* implicit */unsigned long long int) (_Bool)1)))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) (_Bool)1))))));
                        /* LoopSeq 2 */
                        for (int i_4 = 2; i_4 < 11; i_4 += 2) /* same iter space */
                        {
                            arr_16 [i_0] [(unsigned char)0] = ((/* implicit */int) ((min((10738454990017715840ULL), (((/* implicit */unsigned long long int) min((((/* implicit */int) (signed char)0)), ((-2147483647 - 1))))))) << (((((((/* implicit */_Bool) ((int) arr_8 [i_0] [i_0] [6U]))) ? ((~(((/* implicit */int) arr_12 [i_0 + 1] [i_1 + 4])))) : (((((/* implicit */int) var_9)) / (((/* implicit */int) (_Bool)1)))))) + (52)))));
                            arr_17 [i_2] [(_Bool)1] [i_2] [i_1 - 1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */int) ((((((/* implicit */_Bool) arr_2 [i_0 + 1])) ? (var_0) : (1665607820))) != (((/* implicit */int) (unsigned char)95))))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -1665607812)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)49575))) : (var_10)))))))));
                        }
                        for (int i_5 = 2; i_5 < 11; i_5 += 2) /* same iter space */
                        {
                            arr_20 [(signed char)11] [i_3 + 1] [i_1 - 4] [i_1 - 4] [(short)9] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (~((((_Bool)1) ? (((/* implicit */int) (unsigned short)59107)) : (arr_19 [i_3])))))) ? (max(((+(474056020U))), (((/* implicit */unsigned int) (-(var_12)))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (!(((/* implicit */_Bool) 17078025939273213703ULL)))))))));
                            var_23 = ((/* implicit */_Bool) var_5);
                            arr_21 [i_3] [i_5] |= ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) arr_13 [i_0] [i_1 - 3] [i_1 - 3] [i_3 + 1] [i_5])))) ? (((/* implicit */int) ((_Bool) -1665607820))) : (((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (1381350001))))));
                        }
                    }
                }
            } 
        } 
    } 
}
