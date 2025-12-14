/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 9780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=9780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/9780
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
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        for (unsigned short i_1 = 2; i_1 < 15; i_1 += 3) 
        {
            for (unsigned short i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 4) 
                    {
                        for (signed char i_4 = 0; i_4 < 18; i_4 += 2) 
                        {
                            {
                                var_13 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)18))))) & (((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))));
                                var_14 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)-82))) ^ (5059668109284105294LL)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-8))) | (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))));
                                arr_11 [i_0] [i_0] [i_0] [i_0] [(unsigned short)4] = (short)-25684;
                                arr_12 [i_3] = ((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) 9046268644768623628LL)), (17080627465899067739ULL)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -1337172810706919432LL)) ? (((/* implicit */int) (signed char)82)) : (((/* implicit */int) (signed char)81))))) : (arr_4 [i_1 - 2] [i_1])));
                                var_15 = ((/* implicit */signed char) min((var_15), (((/* implicit */signed char) (((-(((((/* implicit */int) var_6)) - (2147483647))))) + (((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (_Bool)1)))))))));
                            }
                        } 
                    } 
                    arr_13 [i_0] [i_0] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-18))) | (12514600725981232566ULL)));
                    var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_9)) && (((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [3]))))) / ((-(((/* implicit */int) arr_6 [(unsigned short)11]))))))) ? (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_0))))) + ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)56))) : (1366116607810483876ULL))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 17080627465899067738ULL)) ? (((/* implicit */int) (unsigned short)50866)) : (713792185))))));
                    var_17 = ((/* implicit */unsigned short) min((max((max((9046268644768623631LL), (((/* implicit */long long int) 508314594)))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_1] [(_Bool)1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (arr_2 [i_1] [i_1])))))), (((/* implicit */long long int) max((((/* implicit */unsigned short) var_8)), ((unsigned short)65535))))));
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */signed char) var_11);
    var_19 = ((/* implicit */short) var_1);
    var_20 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) ((((((/* implicit */int) (unsigned short)58724)) | (((/* implicit */int) var_5)))) + (((/* implicit */int) (signed char)45))))) : ((-(2669306606033662970ULL)))));
}
