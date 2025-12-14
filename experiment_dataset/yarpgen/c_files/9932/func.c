/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9932
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
    var_18 += ((/* implicit */unsigned short) (-(((/* implicit */int) var_12))));
    var_19 = ((/* implicit */unsigned int) min(((unsigned short)0), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)8191))))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (unsigned char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned long long int) min((var_20), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) (+(1043445943)))) ? (((((/* implicit */_Bool) (unsigned short)65535)) ? (4294967295U) : (((/* implicit */unsigned int) 0)))) : (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)65535)))))))) ^ (((((/* implicit */_Bool) (unsigned short)5277)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)214)) ? (0) : (-1533428892)))) : (min((-1097531151756943427LL), (((/* implicit */long long int) -1438613702)))))))))));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (int i_3 = 2; i_3 < 11; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_13 [i_1] [(unsigned short)0] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_2] [i_3 + 1] [i_4])) ? (((/* implicit */int) arr_8 [i_0] [i_1] [i_1] [i_2] [i_3] [0])) : (((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_3] [i_4] [i_4]))))) ? (((/* implicit */long long int) ((int) arr_8 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))) : (((long long int) (unsigned short)57052))));
                                var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) min((max((((/* implicit */int) min(((unsigned char)227), ((unsigned char)222)))), (arr_6 [i_4] [i_0] [i_4]))), (((/* implicit */int) var_8)))))));
                            }
                        } 
                    } 
                } 
                var_22 -= ((/* implicit */int) (~((-(((((/* implicit */_Bool) var_3)) ? (14ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_0] [i_0] [i_0])))))))));
            }
        } 
    } 
}
