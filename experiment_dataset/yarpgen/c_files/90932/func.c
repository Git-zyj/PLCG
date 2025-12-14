/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 90932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=90932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/90932
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
    var_11 = ((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))));
    var_12 = ((/* implicit */short) max((((((unsigned int) 3873878447U)) % (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) (signed char)(-127 - 1)))));
    var_13 = ((/* implicit */unsigned char) ((421088848U) - (((/* implicit */unsigned int) ((/* implicit */int) (signed char)123)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        for (int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 12; i_2 += 2) 
            {
                {
                    var_14 = ((/* implicit */unsigned int) (((~(((/* implicit */int) arr_0 [i_0] [i_2])))) - (((/* implicit */int) ((unsigned char) ((long long int) 2147483647))))));
                    var_15 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) ((((/* implicit */int) (_Bool)0)) & (4190208)))))) % (max((((/* implicit */unsigned long long int) (unsigned char)164)), (16932201462970082043ULL)))));
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) | (((/* implicit */int) arr_6 [i_1 + 2] [i_1 + 2] [i_1 - 1] [i_1 + 2]))))) ? (arr_7 [i_1 + 2] [i_1 + 2]) : (((/* implicit */int) arr_6 [i_1 + 3] [i_1] [i_1 + 3] [i_2]))));
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 370776393)) ? (((((/* implicit */int) ((_Bool) (_Bool)1))) ^ (((/* implicit */int) arr_3 [i_2] [i_1 + 1] [i_0])))) : (((/* implicit */int) ((unsigned short) ((((/* implicit */int) (short)12751)) <= (((/* implicit */int) var_9))))))));
                }
            } 
        } 
    } 
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 23; i_3 += 3) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (unsigned long long int i_5 = 0; i_5 < 23; i_5 += 3) 
            {
                {
                    var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((var_6), (((/* implicit */signed char) var_0))))) ? (((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) var_0))))) : (((3873878432U) << (((var_1) - (7410773883506532809LL)))))))) ? (((((/* implicit */int) var_4)) | (((/* implicit */int) (signed char)-53)))) : (((((/* implicit */_Bool) ((signed char) -1329759357))) ? (arr_11 [i_3] [i_4] [i_5]) : (arr_9 [i_5]))))))));
                    /* LoopSeq 3 */
                    for (unsigned char i_6 = 1; i_6 < 21; i_6 += 4) 
                    {
                        var_19 = ((/* implicit */unsigned short) (+(((/* implicit */int) var_7))));
                        var_20 = ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (_Bool)1)) >> (((((/* implicit */int) (unsigned short)14190)) - (14184))))));
                    }
                    for (unsigned int i_7 = 3; i_7 < 19; i_7 += 1) 
                    {
                        arr_19 [i_4] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) 84959863U))) ? (max((var_8), (((/* implicit */unsigned int) arr_15 [i_4])))) : (((/* implicit */unsigned int) max((arr_11 [i_7 - 1] [i_5] [i_3]), (arr_11 [(signed char)19] [i_4] [i_3]))))));
                        var_21 = ((/* implicit */short) ((long long int) min((((/* implicit */int) arr_18 [i_7 - 2] [i_7 + 2] [i_7] [i_7 + 1])), (-2147483647))));
                    }
                    for (int i_8 = 0; i_8 < 23; i_8 += 3) 
                    {
                        var_22 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 421088863U)) ? (663574359810653752LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)108)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_1)))) : (((((long long int) 1753224275U)) - (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_5] [i_5] [i_4] [i_3])))))))));
                        arr_24 [i_4] [i_8] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (!((!(((/* implicit */_Bool) var_5)))))))) > (((((/* implicit */_Bool) 15728640U)) ? (arr_21 [i_3] [i_4] [i_5] [i_8]) : (max((((/* implicit */unsigned int) var_10)), (1820445598U)))))));
                    }
                }
            } 
        } 
    } 
}
