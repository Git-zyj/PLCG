/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 86948
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=86948 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/86948
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
    var_14 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)170))))) ? (((/* implicit */int) max((var_3), (((/* implicit */unsigned short) (short)-19252))))) : (((/* implicit */int) var_11))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (unsigned char)186))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (((8138171102581223487LL) % (((/* implicit */long long int) ((/* implicit */int) (unsigned char)197)))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    /* LoopSeq 1 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        var_15 = ((/* implicit */short) min((((/* implicit */int) min((var_10), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_4)))))))), ((((~(((/* implicit */int) var_8)))) * (((/* implicit */int) min((((/* implicit */unsigned short) var_8)), ((unsigned short)0))))))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) min((var_2), (var_12))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) max(((-2147483647 - 1)), (((/* implicit */int) var_4))))), (max((((/* implicit */long long int) (short)-24576)), (var_1))))))));
                        var_17 &= ((/* implicit */unsigned char) ((short) ((((/* implicit */_Bool) ((((/* implicit */int) var_9)) & (((/* implicit */int) (unsigned char)118))))) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)37)))));
                        var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) min((((/* implicit */short) (signed char)107)), ((short)-31245)))) / ((-(((/* implicit */int) (short)-19260))))))) ? ((~(((/* implicit */int) min(((short)4), (((/* implicit */short) var_12))))))) : ((~(((/* implicit */int) min((((/* implicit */unsigned short) var_8)), (var_0))))))));
                    }
                    /* LoopNest 2 */
                    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                    {
                        for (long long int i_5 = 2; i_5 < 22; i_5 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */signed char) ((((long long int) min((((/* implicit */short) (_Bool)0)), ((short)-19252)))) > (((/* implicit */long long int) ((/* implicit */int) (signed char)51)))));
                                arr_17 [i_0] [i_0] [i_2] [i_4] [i_4] = (-(((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_11))))), ((short)19268)))));
                                var_20 = ((/* implicit */unsigned short) min(((unsigned char)6), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) (signed char)-84)), (var_4)))))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) max(((short)-19265), (((/* implicit */short) (_Bool)1))))))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) (_Bool)0);
                }
                var_23 = ((/* implicit */unsigned char) min((var_23), (((/* implicit */unsigned char) (-(((long long int) var_7)))))));
                arr_18 [(signed char)12] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)137)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_2)))))))) > ((~(((/* implicit */int) max((var_12), (((/* implicit */unsigned char) (_Bool)1)))))))));
            }
        } 
    } 
    var_24 = ((/* implicit */_Bool) var_2);
    var_25 = ((/* implicit */_Bool) min(((+(((/* implicit */int) min(((unsigned short)30845), (((/* implicit */unsigned short) (short)-28831))))))), (((/* implicit */int) var_12))));
}
