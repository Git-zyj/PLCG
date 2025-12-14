/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 56885
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=56885 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/56885
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
    var_13 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned long long int) -134422249)) : (var_2))))))), (var_11)));
    var_14 = var_10;
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_15 = ((/* implicit */_Bool) ((10978766685606206291ULL) | ((~(((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (var_2)))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) var_12);
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (-3738772251129736851LL) : (3738772251129736851LL)))) ? (((/* implicit */int) (signed char)-49)) : (max((((/* implicit */int) var_3)), (((((/* implicit */int) (signed char)-16)) & (((/* implicit */int) var_0))))))));
        arr_6 [(short)2] |= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) (~(var_5)))) ? (((((/* implicit */_Bool) -3738772251129736860LL)) ? (7581636495507821568ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -3738772251129736866LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)-13175))) : (-3738772251129736860LL)))))), (var_1)));
    }
    /* vectorizable */
    for (int i_2 = 4; i_2 < 19; i_2 += 4) 
    {
        var_17 += ((/* implicit */_Bool) ((unsigned char) var_5));
        var_18 &= ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_10)) & (((/* implicit */int) var_0))))) : (var_11)));
    }
    /* vectorizable */
    for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
    {
        arr_13 [i_3] = ((((/* implicit */_Bool) ((-3738772251129736870LL) & (((/* implicit */long long int) var_9))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) 16942589071943807492ULL)) ? (((/* implicit */int) (signed char)-19)) : (16777208)))));
        var_19 = 3738772251129736830LL;
        arr_14 [i_3] = ((/* implicit */unsigned char) ((unsigned long long int) -3738772251129736860LL));
    }
}
