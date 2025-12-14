/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 89317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=89317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/89317
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
    var_12 = ((/* implicit */int) ((max(((_Bool)1), (max(((_Bool)1), ((_Bool)1))))) ? (((unsigned int) var_9)) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (0U)))) && (((((/* implicit */_Bool) var_7)) && (((/* implicit */_Bool) var_1))))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) /* same iter space */
    {
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 4) 
        {
            arr_8 [i_0] = ((/* implicit */unsigned char) ((_Bool) 0));
            var_13 = ((/* implicit */_Bool) var_6);
        }
        var_14 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) -1)) : (var_2)))) && ((_Bool)1))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((arr_4 [i_0] [i_0]) >= (arr_4 [i_0] [i_0]))))) : (((unsigned int) (-(((/* implicit */int) (unsigned char)17)))))));
        arr_9 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_7)))) ? ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (29U))) : (max((((/* implicit */unsigned int) arr_2 [i_0])), (2384694004U)))))) ? (((/* implicit */unsigned int) ((-1) & (((/* implicit */int) (!((_Bool)0))))))) : (((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) 31U)))) / (((((/* implicit */_Bool) (unsigned char)206)) ? (2171125821U) : (2373644308U)))))));
        arr_10 [(unsigned char)12] = ((/* implicit */long long int) (-(((/* implicit */int) arr_5 [i_0] [15U] [i_0]))));
    }
    for (int i_2 = 0; i_2 < 17; i_2 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */unsigned char) ((((long long int) ((-1LL) <= (6616402412920453206LL)))) - (((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2])))));
        var_16 = (+(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_2]))) > (536870911LL)))));
        var_17 &= ((/* implicit */unsigned int) ((max((((/* implicit */unsigned int) (_Bool)0)), (1142946550U))) == (((((/* implicit */_Bool) -1723912806)) ? (2323854920U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (_Bool)1)))))))));
    }
    var_18 = var_2;
}
